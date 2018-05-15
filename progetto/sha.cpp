#include "sha.h"

sha::sha(QString s,ushort t,int d):ciph(s),type(t),dim(d){
    messageDigest=new unsigned char[dim];
}

//___SETTER
void sha::setText(QString s){testo::setText(s);}
void sha::setCiph(QString s){ciph.clear();ciph.append(s);}
void sha::setType(ushort t){type=t;}

//___GETTER
QString sha::getText()const{return testo::getText();}
QString sha::getCiph()const{return ciph;}
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
    //ricorda: funziona solo se il campo type è cosi costruito:
    //sha1->type=2
    //sha224->type=3
    //sha256->type=4
    //sha384->type=5
    //sha512->type=6
    QByteArray data=ciph.toUtf8();
    QByteArray result;
    result=QCryptographicHash::hash(data,QCryptographicHash::Algorithm(type));
    for(int i=0;i<dim;i++)
        messageDigest[i]=result[i];

    //soluzione migliore con meno spreco di memoria? troppi QByteArray
}

void sha::reset(){
    testo::reset();
    ciph.clear();
    dim=0;
    type=0;
    messageDigest=new unsigned char[0];
}
