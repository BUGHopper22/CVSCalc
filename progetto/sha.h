
#ifndef SHA_H
#define SHA_H
#include<testo.h>
#include<QByteArray>
#include<QCryptographicHash>
#include<QString>

class sha:public testo{
private:
    ushort type;
    //è la dimensione che avrà il message digest
    int dim;
    //ricorda di fare la delete su questo array dinamico??
    unsigned char* messageDigest;
public:
    sha(QString="",ushort=0,int=0);
    ~sha();

    //___SETTER___
    void setText(QString);
    void setType(ushort);
    void setDim(int);

    //___GETTER___
    QString getText()const;
    int getDim()const;
    QString getMessageDigest()const;

    //___METODI
    virtual void converti();
    virtual void reset();
};

#endif // SHA_H
