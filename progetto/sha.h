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
    sha(QString,ushort,int);

    //___SETTER___
    void setText(QString);
    void setCiph(QString);
    void setType(ushort);

    //___GETTER___
    QString getText()const;
    QString getCiph()const;
    int getDim()const;
    QString getMessageDigest()const;

    //___METODI
    virtual void converti();
    virtual void reset();
    void copy()const;
    void sha1();
    void sha224();
    void sha256();
    void sha384();
    void sha512();
};

#endif // SHA_H
