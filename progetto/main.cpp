#include "mainwindow.h"
#include <controller.h>
#include <QApplication>
#include <cifrariocesare.h>
#include <cifrariovigenere.h>
#include <sha1.h>
#include <iostream>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    controller controllerApp;
    //MainWindow w;
    //w.show();

     return a.exec();
    /* prova sha1 NONO FUNZIONANTE
    QString str="abc";


    sha1 s(str);
    //qDebug<<sizeof(str);
    qDebug()<<endl<<"main";
    for(int i=0;i<3;i++){
        qDebug()<<str[i].unicode();
    }
    s.encrypt();
/*
/*
    //__________PROVA CESARE___________
     QString t("Jm tpmf è hjbmmp a");
    for(int i=0;i<16;i++){
        qDebug()<<t[i].toLatin1();
    }
    ushort x = 1;
    cifrarioCesare c(t,x);
    c.decrypt();
    qDebug()<<t.size();

    for(int i=0;i<t.size();i++){
      qDebug()<<c.getCar(i);
    }
*/
 /*
    //__________PROVA VIGENERE___________encrypt
     QString t("Dp japz è kzmpgs q");
     QString v("verme");
    for(int i=0;i<16;i++){
        qDebug()<<t[i].toLatin1();
    }
    qDebug()<<"second"<<endl;
    cifrarioVigenere c(t,v);
    c.decrypt();
    //qDebug()<<t.size();

    for(int i=0;i<t.size();i++){
      qDebug()<<c.getCar(i).toLatin1();
    }
*/




}
