#ifndef CIFRARIOVIGENERE_H
#define CIFRARIOVIGENERE_H
#include<testo.h>
#include <QString>

class cifrarioVigenere:public testo{
private:
    QString ciph;
    QString key;
    bool check;
public:
    cifrarioVigenere(QString="",QString="verme");

    static const ushort fix;

 //forse è meglio impostare il costruttore con i campi dati vuoti e successivamente
    //settare con i metodi set i campi dati successivamente quando andrò a convertire

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
    virtual void encrypt();
    virtual void decrypt();
    void reset();       //DA FARE metodo sovraccaricato dalla base
    void copy() const;  //DA FARE

};

#endif // CIFRARIOVIGENERE_H

