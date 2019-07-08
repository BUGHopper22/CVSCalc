#include "cifrariovigenere.h"


//____RIDEF. OPERATOR+- TRA QCHAR___
ushort operator+(QChar a,QChar const & b){
    return ushort(a.unicode()+(b.unicode()));
}
ushort operator-(QChar a,QChar const & b){
    return ushort(a.unicode()-b.unicode());
}

const ushort cifrarioVigenere::fix=97;// forse 97

cifrarioVigenere::cifrarioVigenere(QString c,QString v,bool b):testo(c),ciph(c),key(v),check(b){}

//___SETTER___
void cifrarioVigenere::setText(QString s){testo::setText(s);}
void cifrarioVigenere::setKey(QString s){key.clear();key.append(s);}
void cifrarioVigenere::setCiph(QString s){ciph.clear();ciph.append(s);}
void cifrarioVigenere::setCheck(bool b){check=b;}

//___GETTER____
QChar cifrarioVigenere::getCar(int i) const{ return ciph[i]; }
QString cifrarioVigenere::getText() const{return testo::getText();}
QString cifrarioVigenere::getCiph() const{return ciph;}

//___METODI___
void cifrarioVigenere::converti(){
    if(ciph=="")
        throw(Error('i'));
    if(key=="")
        throw(Error('k'));
    //controllo sulle lettere della key
    QString::const_iterator cit=key.cbegin();
    for(;cit!=key.cend();cit++){
        qDebug() << *cit;
        qDebug() << "porcatroia";
        QChar letter=*cit;
        if(cit->isNumber()){
            throw(Error('n'));
        }
        else if( ('A'<letter && letter>'Z' && 'a'<letter && letter>'z')){
            qDebug() << "problema è qui";
            throw(Error('k1'));
        }
    }

    if(check)
        encrypt();
    else
        decrypt();
}
void cifrarioVigenere::reset(){
    testo::reset();
    ciph.clear();   //ATTENZIONE: probabilmente size of string=0. Controllare cosa fa il clear!!
    key.clear();    //ATTENZIONE: probabilmente size of string=0. Controllare cosa fa il clear!!
}
void cifrarioVigenere::encrypt(){

    //________RICORDA: a equivale a zero_________
    QString::const_iterator cit=key.cbegin();
    QString::iterator it;
    for (it=ciph.begin();it!=ciph.end();it++){
        if(cit==key.cend())
            cit=key.cbegin();
        QChar letter=*it;
        //se nella key si mettono delle lettere maiuscole il conto verrebbe errato => le trasformo tutte in minuscole con toLower().
        QChar shift=(*cit).toLower()-fix;
        //Attenzione:non posso usare isLetter() perchè mi prende anche le lettere accentate!!
        //Se sono: numeri || lettere accentate || spazi || punteggiatura, non entra e li lascia invariati.
        if( (letter>='A' && letter<='Z') || (letter>='a' && letter<='z') ){
            if( (letter>='A' && letter<='Z' && letter+shift>ushort('Z'))||
                (letter>='a' && letter<='z' && letter+shift>ushort('z')) )
                *it=QChar(letter+shift-alphSize);
            else
                *it=letter+shift;
            ++cit;
            if( cit==key.cend() )
                cit=key.cbegin();
        }
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
        QChar shift=(*cit)-fix;
        if( (letter>='A' && letter<='Z') || (letter>='a' && letter<='z') ){// sono i caratteri che devo andare a modificare
            if( (letter>='A' && letter<='Z' && letter-shift<ushort('A'))||
                (letter>='a' && letter<='z' && letter-shift<ushort('a')) )
                *it=QChar(letter-shift+alphSize);
            else
                *it=QChar(letter-shift);
            ++cit;
            if( cit==key.cend() )
                cit=key.cbegin();
        }
    }
    return;

}
