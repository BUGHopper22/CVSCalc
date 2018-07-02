#include "sha.h"
#include <Error.h>

sha::sha(QString s,ushort t,int d):testo(s),type(t),dim(d){
    messageDigest=new unsigned char[dim];
}

//___SETTER
void sha::setText(QString s){testo::setText(s);}
void sha::setType(ushort t){type=t;}
void sha::setDim(int d){dim=d;messageDigest=new unsigned char[dim];}

//___GETTER
QString sha::getText()const{return testo::getText();}
int sha::getDim()const{return dim;}
QString sha::getMessageDigest()const{
    QByteArray tmp;
    for(int i=0;i<dim;i++)
        tmp.append(messageDigest[i]);
    tmp=tmp.toHex();
    QString str=tmp;
    return str;
}

//___METODI
void sha::converti(){
    //funziona solo se il campo type è cosi costruito:
    //sha1->type=2
    //sha224->type=3
    //sha256->type=4
    //sha384->type=5
    //sha512->type=6
    if(getText()=="")
        throw(Error('i'));
    QByteArray data=getText().toUtf8();
    QByteArray result;
    result=QCryptographicHash::hash(data,QCryptographicHash::Algorithm(type));
    for(int i=0;i<dim;i++)
        messageDigest[i]=result[i];

    //soluzione migliore con meno spreco di memoria? troppi QByteArray
}

void sha::reset(){
    testo::reset();
    dim=0;
    type=0;
    messageDigest=new unsigned char[0];
}

