#ifndef SHA_H
#define SHA_H
#include<testo.h>
#include<QByteArray>
#include<QCryptographicHash>
#include<QString>

class sha:public testo{
private:
    QString ciph;
    ushort type;
    int dim;
    //ricorda di fare la delete su questo array dinamico
    unsigned char* messageDigest;
public:
    sha(QString="",ushort=0,int=0);

    //___SETTER___
    void setText(QString);
    void setCiph(QString);
    void setType(ushort);
    void setDim(int);

    //___GETTER___
    QString getText()const;
    QString getCiph()const;
    int getDim()const;
    QString getMessageDigest()const;

    //___METODI
    virtual void converti();
    virtual void reset();
    virtual void encrypt();
    virtual void decrypt();
};

#endif // SHA_H
