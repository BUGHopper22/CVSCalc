#include "sha1.h"
#include <iterator>
#include <bitset>
#include <QVector>
#include <QDebug>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <QString>

#define SHA1CircularShift(bits,word) \
    (((word) << (bits)) | ((word) >> (32-(bits))))

sha1::sha1(QString c):testo(c){

    SHA1Reset();
    QByteArray ar=getText().toLatin1();
    for(int i=0;i<ar.size();i++)
        ciph.append(ar[i]);

    //unsigned int sizeVector=(sizeof(QChar)*c.size());
    //QString fatto di QChar=>2byte, da convertire a uint8_t

    //ALGORITMO PER UNICODE A DUE BYTE
    /*QString::iterator it=c.begin();
    int cont=0;
    for(it=c.begin(),cont=0; it!=c.end();it++,cont=cont+2){
        //splitta il QChar convertito in short, in due uint8_t
        //void temp=reinterpret_cast<short*>(it);//type_of(it)=QChar* IMPORTANTE?
        const uint8_t* primo=(*it) & 0xFF;
        const uint8_t* secondo=(*it) >> 8;
        ciph.append(primo);
        ciph.append(secondo);
    }*/
    //ALGORITMO PER UTF-8
    /*qDebug()<<"costruttore";
    QString::iterator it=c.begin();
    for(it=c.begin();it!=c.end();it++){
        ciph.append((*it).toLatin1());

    }
    for(int i=0;i<3;i++){
        qDebug()<<ciph[i];
    }*/
}



//This function accepts an array of octets as the next portion of the message.
void sha1::SHA1Input(const uint8_t* message_array, unsigned length){
    //per il debug
    /*qDebug()<<"lenght"<<length<<" ";
    qDebug()<<endl<<"SHAInput";
    for(int i=0;i<length;i++)
        qDebug()<<message_array[i];*/

    if(!length)//sha su messaggio nullo
        return;
    if(!this || !message_array)//problemi con l input
        return;
    if(Computed){//gia stato computato
        //Corrupted=shaStateError;
        return;
    }
    if(Corrupted)//corrotto
        return;
    //fine casi base
    while(length-- && !Corrupted){
        qDebug()<<"lenght"<<length<<" "<<endl<<"arrayEl="<<(*message_array & 0xFF);
        Message_Block[Message_Block_Index++]=(*message_array & 0xFF);
        Length_Low += 8;
        if(Length_Low==0){
            Length_High++;
            if(Length_High==0)
                Corrupted=1;
        }
        if(Message_Block_Index==64){
            //This function will process the next 512 bits of the message stored in the Message_Block array
            SHA1ProcessMessageBlock();
        }
    }
}

//overriding di shaInput con QVector
void sha1::SHA1Input(const QVector<uint8_t> arr){
    char array[arr.size()+1];
    for(unsigned int i=0;i<strlen(array);i++){
        SHA1Input((const unsigned char *)&array[i] ,strlen(array));
    }

}

void sha1::encrypt(){
    //devo fare lo sha1 reset?
    SHA1Reset();
    /*if(err){//stampa problemi consistenza dei dati
    }*/
    //err=SHA1Input(ciph,getSize()*sizeof(QChar));
    SHA1Input(ciph);//ciph is a QVector
    uint8_t Message_Digest[20];
    SHA1Result(Message_Digest);
    for(int i=0;i<20;i++)
        printf ("%x",Message_Digest[i]);
        // qDebug()<<Message_Digest[i];

    //prova con QVector che non andava
    //vado a modificare l' oggetto puntato? uso cit or it?
    //keyword auto non funziona
    /*unsigned int sizeVector=(sizeof(QChar)*ciph.size());
    QVector<uint8_t> arrayCompleto(sizeVector,0);
    QString::iterator it=ciph.begin();
    QVector<uint8_t>::iterator uit;
    for(it=ciph.begin(),uit=arrayCompleto.begin();
        it!=ciph.end();
        it++,uit=uit+2){
        //splitta il QChar convertito in short, in due uint8_t
        short* temp=reinterpret_cast<short*>(it);//type_of(it)=QChar*
        const uint8_t primo=(*temp) & 0xFF;
        const uint8_t secondo=(*temp) >> 8;
        *uit=primo;
        *(uit+1)=secondo;
        qDebug()<<*it;
    }*/
}
void sha1::decrypt(){}

void sha1::converti(){
    encrypt();//rivedii
}

void sha1::reset(){
    testo::reset();
    ciph.clear();
}

//___SETTER___
void sha1::setText(QString s){ testo::setText(s);}
void sha1::setCiph(QString s){
    ciph.clear();
    QByteArray ar=s.toLatin1();
    for(int i=0;i<ar.size();i++)
        ciph.append(ar[i]);
}

//___GETTER___
QString sha1::getCiph()const{
    QByteArray ar;

    //QByteArray::iterator it=ar.begin();
    for(int i=0;i<ar.size();i++)
        ar.append(ciph[i]);
    return ar;
}
QString sha1::getText()const{return testo::getText();}




//_______________________________NON TOCCARE_________________________________________//
void sha1::SHA1Reset(){
    if(!this)
        return; //shaNull;
    Length_Low=0;
    Length_High = 0;
    Message_Block_Index = 0;
    Intermediate_Hash[0] = 0x67452301;
    Intermediate_Hash[1] = 0xEFCDAB89;
    Intermediate_Hash[2] = 0x98BADCFE;
    Intermediate_Hash[3] = 0x10325476;
    Intermediate_Hash[4] = 0xC3D2E1F0;
    Computed = 0;
    Corrupted = 0;
    return;
}

void sha1::SHA1Result(uint8_t Message_Digest[SHA1HashSize]){
    int i;
    if (!this || !Message_Digest)
        return;
    if (Corrupted)//campo dati del .h che che è true se il messageDigest è corrotto
        return ;
    if (!Computed){//campo dati del .h ->true sse il message digest è  gia stato calcolato
        // quindi se non è corrotto e non è gia stato calcolato aggiunge il padding al messaggio(verificare se controlla la dim dei blocchi e cosa succede per piu blocchi)
        SHA1PadMessage();
        for(i=0; i<64; ++i){
            /* message may be sensitive, clear it out */
            Message_Block[i] = 0;
        }
        Length_Low = 0; /* and clear length */
        Length_High = 0;
        Computed = 1;
    }
    for(i = 0; i < SHA1HashSize; ++i){
        Message_Digest[i] = Intermediate_Hash[i>>2]>> 8 * ( 3 - ( i & 0x03 ) );
    }
    return;
}

void sha1::SHA1PadMessage(){
    /*
    * Check to see if the current message block is too small to hold
    * the initial padding bits and length. If so, we will pad the
    * block, process it, and then continue padding into a second
    * block.
    */
    if (Message_Block_Index > 55){
        Message_Block[Message_Block_Index++] = 0x80;
        while(Message_Block_Index < 64)
            Message_Block[Message_Block_Index++] = 0;
        SHA1ProcessMessageBlock();
        while(Message_Block_Index < 56)
            Message_Block[Message_Block_Index++] = 0;
    }
    else{
        Message_Block[Message_Block_Index++] = 0x80;
        while(Message_Block_Index < 56)
            Message_Block[Message_Block_Index++] = 0;
    }
    /*
    * Store the message length as the last 8 octets
    */
    Message_Block[56] = Length_High >> 24;
    Message_Block[57] = Length_High >> 16;
    Message_Block[58] = Length_High >> 8;
    Message_Block[59] = Length_High;
    Message_Block[60] = Length_Low >> 24;
    Message_Block[61] = Length_Low >> 16;
    Message_Block[62] = Length_Low >> 8;
    Message_Block[63] = Length_Low;
    SHA1ProcessMessageBlock();
}

void sha1::SHA1ProcessMessageBlock(){
    const uint32_t K[] = {
        /* Constants defined in SHA-1 */
        0x5A827999,
        0x6ED9EBA1,
        0x8F1BBCDC,
        0xCA62C1D6
    };
    int t; /* Loop counter */
    uint32_t temp; /* Temporary word value */
    uint32_t W[80]; /* Word sequence */
    uint32_t A, B, C, D, E; /* Word buffers */
    /*
    * Initialize the first 16 words in the array W
    */
    for(t = 0; t < 16; t++){
        W[t] = Message_Block[t * 4] << 24;
        W[t] |= Message_Block[t * 4 + 1] << 16;
        W[t] |= Message_Block[t * 4 + 2] << 8;
        W[t] |= Message_Block[t * 4 + 3];
    }
    for(t = 16; t < 80; t++)
        W[t] = SHA1CircularShift(1,W[t-3] ^ W[t-8] ^ W[t-14] ^ W[t-16]);

    A = Intermediate_Hash[0];
    B = Intermediate_Hash[1];
    C = Intermediate_Hash[2];
    D = Intermediate_Hash[3];
    E = Intermediate_Hash[4];

    for(t = 0; t < 20; t++){
        temp = SHA1CircularShift(5,A) + ((B & C) | ((~B) & D)) + E + W[t] + K[0];
        E = D;
        D = C;
        C = SHA1CircularShift(30,B);
        B = A;
        A = temp;
    }
    for(t = 20; t < 40; t++){
        temp = SHA1CircularShift(5,A) + (B ^ C ^ D) + E + W[t] + K[1];
        E = D;
        D = C;
        C = SHA1CircularShift(30,B);
        B = A;
        A = temp;
    }
    for(t = 40; t < 60; t++){
        temp = SHA1CircularShift(5,A) +
        ((B & C) | (B & D) | (C & D)) + E + W[t] + K[2];
        E = D;
        D = C;
        C = SHA1CircularShift(30,B);
        B = A;
        A = temp;
    }
    for(t = 60; t < 80; t++){
        temp = SHA1CircularShift(5,A) + (B ^ C ^ D) + E + W[t] + K[3];
        E = D;
        D = C;
        C = SHA1CircularShift(30,B);
        B = A;
        A = temp;
    }
    Intermediate_Hash[0] += A;
    Intermediate_Hash[1] += B;
    Intermediate_Hash[2] += C;
    Intermediate_Hash[3] += D;
    Intermediate_Hash[4] += E;
    Message_Block_Index = 0;
}
