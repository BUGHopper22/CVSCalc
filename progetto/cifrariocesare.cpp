#include "cifrariocesare.h"
#include <QDebug>

cifrarioCesare::cifrarioCesare(QString c, ushort s): testo(c),ciph(c),shift(s%26) {}

//unsigned short int cifrarioCesare::alphSize=26;

ushort operator+(QChar c,const ushort& i){
    return ushort(c.unicode()+i);
}
ushort operator-(QChar c, const ushort& i){
    return ushort(c.unicode()-i);
}

void cifrarioCesare::setShift(int s){
    this->shift=s%26;
}

QChar cifrarioCesare::getCar(int i) const{
    return ciph[i];
}

void cifrarioCesare::reset(){
    testo::reset();
    ciph.clear();
    shift=3;
}

void cifrarioCesare::encrypt(){// CONTROLLA Letter_Lowercase____Letter_Uppercase____isLetter
    for (int i = 0; i < getSize(); i++){
        const QChar letter=ciph.at(i);
       // QChar letterMod=sumCharInt(letter,shift);
        if((letter>='A' && letter<='Z') || (letter>='a' && letter<='z')){// sono i caratteri che devo andare a modificare
            if(
                    (letter>='A' && letter<='Z' && letter+shift>('Z'))||
                    (letter>='a' && letter<='z' && letter+shift>('z'))     )
               ciph[i]= QChar((letter+shift)-alphSize) ;
            else
                ciph[i]=QChar(letter+shift);
        }
        /*else{   //sono i caratteri che devo copiare cosi  come sono
            ciph[i]=letter;
        }*/
    }
    return;
}

void cifrarioCesare::decrypt()
{
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

QString cifrarioCesare::getCiph(){
    return ciph;
}

/*CORRETTO, RIVEDI LA FUNZIONE SE QUALCOSA NON COMPILA
string s="La banana è rossa zzz";
uint8_t shift=3;
//uint8_t prova=8;
//cout<<sizeof(prova);
cout<<s<<endl;
for (int i = 0; i < s.size(); i++){
    if( (s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') ){// devo agire sul dato
        if(     (s[i]>='A' && s[i]<='Z' && s[i]+shift>'Z')||
                (s[i]>='a' && s[i]<='z' && s[i]+shift>'z')     ){
            s[i]=s[i]+shift-('0'+uint8_t(26));
            cout<<" "<<"primo"<<" "<<s[i]+shift;
        }

        else{
            s[i]=s[i]+shift;
            cout<<" "<<"secondo";
        }
    }
    cout<<endl;
}
cout<<s<<endl;*/
QString cifrarioCesare::getText(){
    return testo::getText();
}
