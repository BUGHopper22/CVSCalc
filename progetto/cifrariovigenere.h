#ifndef CIFRARIOVIGENERE_H
#define CIFRARIOVIGENERE_H
#include<testo.h>

class cifrarioVigenere:public testo{
private:
    QString ciph;
    QString key;
    //static unsigned short int fix;  //97
public:
    cifrarioVigenere(QString="",QString="verme");
    static const ushort fix;
    //void setKey(QString );
    QChar getCar(int i)const;
    void reset();       //DA FARE metodo sovraccaricato dalla base
    void copy() const;  //DA FARE
    virtual void encrypt();
    virtual void decrypt();
};


/*
ushort operator-(QChar c,unsigned short int i){
    return ushort(c.unicode()-i);
}*/


#endif // CIFRARIOVIGENERE_H

