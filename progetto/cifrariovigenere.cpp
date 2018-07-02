#include "cifrariovigenere.h"


//____RIDEF. OPERATOR+- TRA QCHAR___
ushort operator+(QChar a,QChar const & b){
    return ushort(a.unicode()+(b.unicode()));
}
ushort operator-(QChar a,QChar const & b){
    return ushort(a.unicode()-b.unicode());
}

const ushort cifrarioVigenere::fix=96;// forse 97

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
    QString::const_iterator it=key.begin();
    for(; it!=key.end();++it){
        if(it->isNumber()){
            throw(Error('n'));
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
    //_______________KEY CON LETTERE MAIUSCOLE??????????????_________________________RISOLTO

    //________RICORDA: a equivale a zero_________
    QString::const_iterator cit=key.cbegin();
    QString::iterator it;
    for (it=ciph.begin();it!=ciph.end();it++){
        if(cit==key.cend())
            cit=key.cbegin();
        QChar letter=*it;
        //se nella key si mettono delle lettere maiuscole il conto verrebbe errato => le trasformo tutte in minuscole con toLower().
        QChar shift=(*cit).toLower()-97;
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
