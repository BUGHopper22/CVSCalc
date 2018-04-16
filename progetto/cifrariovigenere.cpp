#include "cifrariovigenere.h"
#include <QDebug>

cifrarioVigenere::cifrarioVigenere(QString c,QString v):ciph(c),key(v){}

const ushort cifrarioVigenere::fix=96;// forse 97

ushort operator+(QChar a,QChar const & b){
    return ushort(a.unicode()+(b.unicode()));
}

ushort operator-(QChar a,QChar const & b){
    return ushort(a.unicode()-b.unicode());
}

//unsigned short int cifrarioVigenere::fix=26;

/*void cifrarioVigenere::setKey(QString k){
    key(k);//costruzione di copia di QString
}*/
QChar cifrarioVigenere::getCar(int i) const{
    return ciph[i];
}

void cifrarioVigenere::reset(){
    testo::reset();
    ciph.clear();   //ATTENZIONE: probabilmente size of string=0. Controllare cosa fa il clear!!
    key.clear();    //ATTENZIONE: probabilmente size of string=0. Controllare cosa fa il clear!!
}

//________RICORDA: a equivale a zero_________
void cifrarioVigenere::encrypt(){
    QString::const_iterator cit=key.cbegin();
    QString::iterator it;
    for (it=ciph.begin();it!=ciph.end();it++){

        if(cit==key.cend())
            cit=key.cbegin();
        QChar letter=*it;

        QChar shift=(*cit)-97;
        if( (letter>='A' && letter<='Z') || (letter>='a' && letter<='z') ){// sono i caratteri che devo andare a modificare
            if(     (letter>='A' && letter<='Z' && letter+shift>ushort('Z'))||
                    (letter>='a' && letter<='z' && letter+shift>ushort('z'))     )
            {    *it=QChar(letter+shift-alphSize);
                //qDebug()<<"first"<<*it<<QChar(letter+shift-alphSize)<<" "<<letter.unicode()<<""<<shift.unicode()<<" "<<letter<<" "<<shift<<" "<<endl;
             }           //QChar( ciph.at(i).toLatin()+shift-('0'+uint8_t(26)) );
            else{
                *it=letter+shift;
                //qDebug()<<"SECOND"<<*it<<QChar(letter+shift)<<" "<<letter.unicode()<<""<<shift.unicode()<<" "<<letter<<" "<<shift<<" "<<endl;
            }
                ++cit;
            if( cit==key.cend() ){
                cit=key.cbegin();
            }
        }
        //else{}    non c è nessun else perchè ho già copiato la stringa dentro ciph quindi non devo modificare nulla
    }
    return;
}

void cifrarioVigenere::decrypt(){
    QString::const_iterator cit=key.cbegin();
    QString::iterator it;
    for (it=ciph.begin();it!=ciph.end();it++){

        if(cit==key.cend())
            cit=key.cbegin();
        QChar letter=*it;

        QChar shift=(*cit)-97;
        if( (letter>='A' && letter<='Z') || (letter>='a' && letter<='z') ){// sono i caratteri che devo andare a modificare
            if(     (letter>='A' && letter<='Z' && letter-shift<ushort('A'))||
                    (letter>='a' && letter<='z' && letter-shift<ushort('a'))     )
            {    *it=QChar(letter-shift+alphSize);
                //qDebug()<<"first"<<*it<<QChar(letter+shift-alphSize)<<" "<<letter.unicode()<<""<<shift.unicode()<<" "<<letter<<" "<<shift<<" "<<endl;
             }           //QChar( ciph.at(i).toLatin()+shift-('0'+uint8_t(26)) );
            else{
                *it=QChar(letter-shift);
                //qDebug()<<"SECOND"<<*it<<QChar(letter+shift)<<" "<<letter.unicode()<<""<<shift.unicode()<<" "<<letter<<" "<<shift<<" "<<endl;
            }
                ++cit;
            if( cit==key.cend() ){
                cit=key.cbegin();
            }
        }
        //else{}    non c è nessun else perchè ho già copiato la stringa dentro ciph quindi non devo modificare nulla
    }
    return;

}
