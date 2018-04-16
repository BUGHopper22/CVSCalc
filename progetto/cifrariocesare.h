#ifndef CIFRARIOCESARE_H
#define CIFRARIOCESARE_H
#include<testo.h>
//#include<stdint.h>

class cifrarioCesare:public testo{
private:
    QString ciph;
    ushort shift;//nessun controllo eseguito:deve essere maggiore di zero e minore di 26
    //static unsigned short int alphSize;
    //static QChar sumCharInt(QChar,unsigned short int);//metodo statico di  utilità

    //static QChar fixLatin(QChar c);//metodo statico di utilità
public:
    cifrarioCesare(QString c="", ushort s=3 );//controllo di integrita su 0<=shift<=26
    void setShift(int i);
    QChar getCar(int i)const;
    void reset();           //DA FARE
    void copy() const;      //DA FARE
    virtual void encrypt();
    virtual void decrypt();

};

//_________________EMMO' DOVELIMETTOQUESTI?__________________


#endif // CIFRARIOCESARE_H

