#include "mainwindow.h"
#include <controller.h>
#include <QApplication>
#include <cifrariocesare.h>
#include <cifrariovigenere.h>
#include <sha1.h>
#include <iostream>
#include <QDebug>
#include <QFile>
#include <QIODevice>
#include <QFontDatabase>
#include <QFileSystemModel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    controller controllerApp;

    //FONT
    //ttf



    //otf
    QFontDatabase::addApplicationFont(":/img/font/Dense-Regular.otf");
    QFont font = QFont("dense", 10, 1);
    //___STYLESHEET___
    QFile File(":/style.qss");
    File.open(QFile::ReadOnly);
    QString StyleSheet=QLatin1String(File.readAll());
    a.setStyleSheet(StyleSheet);
    //___FINE_STYLESHEET___

    controllerApp.showC();
    //MainWindow w;
    //w.show();

     return a.exec();

     //__________PROVA SHA1___________
     /* prova sha1 NONO FUNZIONANTE
   sha1 s(str);
    //qDebug<<sizeof(str);
    qDebug()<<endl<<"main";
    for(int i=0;i<3;i++){
        qDebug()<<str[i].unicode();
    }
    s.encrypt();/*
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
