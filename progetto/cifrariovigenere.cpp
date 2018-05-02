#include "cifrariovigenere.h"
#include <QDebug>

//____RIDEF. OPERATOR TRA QCHAR___
ushort operator+(QChar a,QChar const & b){
    return ushort(a.unicode()+(b.unicode()));
}

ushort operator-(QChar a,QChar const & b){
    return ushort(a.unicode()-b.unicode());
}

const ushort cifrarioVigenere::fix=96;// forse 97

cifrarioVigenere::cifrarioVigenere(QString c,QString v):testo(c),ciph(c),key(v){}

//___SETTER___
void cifrarioVigenere::setText(QString s){testo::setText(s);}
void cifrarioVigenere::setKey(QString s){key.clear();key.append(s);}
void cifrarioVigenere::setCiph(QString s){ciph.clear();ciph.append(s);}

//___GETTER____
QChar cifrarioVigenere::getCar(int i) const{ return ciph[i]; }
QString cifrarioVigenere::getText() const{return testo::getText();}
QString cifrarioVigenere::getCiph() const{return ciph;}

//___METODI___
void cifrarioVigenere::converti(){
    return;// ricordardi di sistemare
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
        QChar shift=(*cit)-97;
        if( (letter>='A' && letter<='Z') || (letter>='a' && letter<='z') ){// sono i caratteri che devo andare a modificare
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
        QChar shift=(*cit)-97;
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
