#include "cifrariocesare.h"
#include <QDebug>

//RIDEFINIZIONE OPERATOR TRA QCHAR E USHORT (DOVE LI METTO?)
ushort operator+(QChar c,const ushort& i){
    return ushort(c.unicode()+i);
}
ushort operator-(QChar c, const ushort& i){
    return ushort(c.unicode()-i);
}

cifrarioCesare::cifrarioCesare(QString c, ushort s): testo(c),ciph(c),shift(s%26) {}

//___SETTER___
void cifrarioCesare::setCheck(bool b){check=b;}
void cifrarioCesare::setText(QString s){ testo::setText(s); }
void cifrarioCesare::setCiph(QString s){ ciph.clear(); ciph.append(s); }
void cifrarioCesare::setShift(int s){ shift=s%26; }


//___GETTER___
bool cifrarioCesare::getCheck()const{return check;}
QChar cifrarioCesare::getCar(int i) const{ return ciph[i]; }
QString cifrarioCesare::getCiph() const{ return ciph; }
QString cifrarioCesare::getText() const{ return testo::getText(); }

//___METODI___
void cifrarioCesare::converti(){
    if(check)
        encrypt();
    else
        decrypt();
}

void cifrarioCesare::encrypt(){// CONTROLLA Letter_Lowercase____Letter_Uppercase____isLetter
    for (int i = 0; i < getSize(); i++){
        const QChar letter=ciph.at(i);
       // QChar letterMod=sumCharInt(letter,shift);
        if((letter>='A' && letter<='Z') || (letter>='a' && letter<='z')){// sono i caratteri che devo andare a modificare
            if(     (letter>='A' && letter<='Z' && letter+shift>('Z'))||
                    (letter>='a' && letter<='z' && letter+shift>('z'))     )
               ciph[i]= QChar((letter+shift)-alphSize) ;
            else
                ciph[i]=QChar(letter+shift);
        }
    }
    return;
}

void cifrarioCesare::decrypt(){
    for (int i = 0; i < ciph.size(); i++){
        QChar letter=ciph.at(i);
        if( (letter>='A' && letter<='Z') || (letter>='a' && letter<='z') ){// devo agire sul dato
            if(     (letter>='A' && letter<='Z' && letter-shift<'A')||
                    (letter>='a' && letter<='z' && letter-shift<'a')     )
               { ciph[i]=QChar((letter-shift)+alphSize);
                //qDebug()<<"first"<<endl;
            }
            else{
                ciph[i]=QChar(letter-shift);
                //qDebug()<<"second"<<endl;
            }
        }
        else
            ciph[i]=letter;
    }
    return;
}

void cifrarioCesare::reset(){
    testo::reset();
    ciph.clear();
    shift=0;
}


