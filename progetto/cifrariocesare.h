#ifndef CIFRARIOCESARE_H
#define CIFRARIOCESARE_H
#include<testo.h>

class cifrarioCesare:public testo{
private:
    QString ciph;
    //nessun controllo eseguito:deve essere maggiore di zero e minore di 26
    ushort shift;
    bool check;
public:
    cifrarioCesare(QString c="", ushort s=3);//controllo di integrita su 0<=shift<=26

    //___SETTER___
    void setText(QString s);
    void setCiph(QString s);
    void setShift(int i);
    void setCheck(bool b);

    //___GETTER___
    bool getCheck()const;
    QChar getCar(int i)const;
    QString getCiph()const;
    QString getText()const;

    //___METODI___
    virtual void converti();
    virtual void encrypt();
    virtual void decrypt();
    void reset();           //DA FARE
    void copy() const;      //DA FARE
};

#endif // CIFRARIOCESARE_H

