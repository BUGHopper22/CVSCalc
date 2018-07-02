#ifndef CIFRARIOCESARE_H
#define CIFRARIOCESARE_H
#include<testo.h>
#include <QDebug>

class cifrarioCesare:public testo{
private:
    QString ciph;
    ushort shift;
    bool check;

public:
    cifrarioCesare(QString c="", ushort s=3);
    //~cifrarioCesare();

    //___SETTER___
    void setText(QString s);
    void setCiph(QString s);
    void setShift(int i);
    void setCheck(bool b);

    //___GETTER___
    bool getCheck()const;
    QString getCiph()const;
    QString getText()const;

    //___METODI___
    virtual void converti();
    void encrypt();
    void decrypt();
    virtual void reset();
    //void copy() const;
};

#endif // CIFRARIOCESARE_H

