    #ifndef SHA1_H
#define SHA1_H
#include <stdint.h>
#include <QString>
#include <QChar>
#include <testo.h>
#include <QByteArray>
#include <string.h>
#include <bitset>
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
    //_____campi dati dell RFC-3174_____//
    uint32_t Intermediate_Hash[SHA1HashSize/4]; /* Message Digest (32*5=160->corretto)*/
    uint32_t Length_Low; /* Message length in bits */
    uint32_t Length_High; /* Message length in bits */
    int_least16_t Message_Block_Index;/* Index into message block array */
    uint8_t Message_Block[64]; /* 512-bit message blocks */
    int Computed; /* Is the digest computed? */
    int Corrupted; /* Is the message digest corrupted? */
    //_____metodi dell RFC-3174_____//
    int SHA1Reset();
    void SHA1PadMessage();
    void SHA1ProcessMessageBlock();
    int SHA1Input(const uint8_t *,unsigned int);
    int SHA1Input(const QVector<uint8_t> );
    int SHA1Result(uint8_t Message_Digest[SHA1HashSize]);
//caccapupù
    //________IMPORTANTE_____________//
    //QString usa QChar in codifica: UTF-16.
    //Quindi quando uso encrypt sulla QString sto andando a fare l' hash su quella codifica

    QVector<uint8_t> ciph;


public:
    sha1(QString ="");
    virtual void encrypt();
    virtual void decrypt();
};

#endif // SHA1_H
