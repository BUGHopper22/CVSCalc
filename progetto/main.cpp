#include "mainwindow.h"
#include <QApplication>
//#include <testo.h>
#include <cifrariocesare.h>
#include <cifrariovigenere.h>
#include <iostream>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

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



    return a.exec();
}
