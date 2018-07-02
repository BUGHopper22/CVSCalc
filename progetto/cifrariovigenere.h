#ifndef CIFRARIOVIGENERE_H
#define CIFRARIOVIGENERE_H
#include<testo.h>
#include <QString>
#include <QDebug>
#include <error.h>


class cifrarioVigenere:public testo{
private:
    QString ciph;
    QString key;
    bool check;
public:
    cifrarioVigenere(QString="",QString="verme",bool=true);

    static const ushort fix;
    //___SETTER___
    void setText(QString);
    void setKey(QString);
    void setCiph(QString);
    void setCheck(bool);

    //___GETTER___
    QChar getCar(int i)const;
    QString getText() const;
    QString getCiph() const;

    //___METODI
    virtual void converti();
    void encrypt();
    void decrypt();
    virtual void reset();       //DA FARE metodo sovraccaricato dalla base
};

#endif // CIFRARIOVIGENERE_H

