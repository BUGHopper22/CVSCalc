#ifndef SHA1_H
#define SHA1_H
#include <stdint.h>
#include <QString>
#include <QChar>
#include <testo.h>
#include <QByteArray>
#define SHA1HashSize 20

#ifndef _SHA_enum_
#define _SHA_enum_
enum{
    shaSuccess = 0,
    shaNull, /* Null pointer parameter */
    shaInputTooLong, /* input data too long */
    shaStateError /* called Input after Result */
};
#endif

class sha1:public testo{
private:
    QString ciph;
    //campi dati
    uint32_t Intermediate_Hash[SHA1HashSize/4]; /* Message Digest (32*5=160->corretto)*/
    uint32_t Length_Low; /* Message length in bits */
    uint32_t Length_High; /* Message length in bits */
    /* Index into message block array */
    int_least16_t Message_Block_Index;
    uint8_t Message_Block[64]; /* 512-bit message blocks */
    int Computed; /* Is the digest computed? */
    int Corrupted; /* Is the message digest corrupted? */
    //metodi
    //QVector<uint> QString::toUcs4() const;
    //QVector<uint> converti();//mi converte le singole celle in uint(IN TEORIA dovrebbero essere di 8 bit spero)
    //uint8_t* converti();
    QByteArray converti();
    //const uchar* converti(QString);
    int SHA1Reset();
    void SHA1PadMessage();
    void SHA1ProcessMessageBlock();
public:
    sha1(QString ="");
    //FORSE DEVO TOGLIERE TUTTI GLI SHA PASSATI COME PARAMETRO IN QUANTO LKIK PASSO COME OGGETTO D INVOCAZIONE

    int SHA1Input(const uint8_t *,unsigned int);
    int SHA1Result(uint8_t Message_Digest[SHA1HashSize]);


    virtual void encrypt();
    virtual void decrypt();
};

#endif // SHA1_H
