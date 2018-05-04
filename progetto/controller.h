#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "mainwindow.h"
#include <QApplication>
#include <cifrarioCesare.h>
#include <cifrarioVigenere.h>
#include <sha1.h>


class controller:public QObject{
    Q_OBJECT
private:
    MainWindow* w;
    cifrarioCesare cesare;
    cifrarioVigenere vigenere;
public:
    controller();
    ~controller();
    void showC();
public slots:
    //CESARE
    void convert(QString,int,bool);//convert button
    void reset();//reset button
    //VIGENERE
    void convertV(QString,QString,bool);//convert button
    void resetV();//reset button

signals:
    //CESARE
    void cesareOutput(QString);//convert button
    void resetOutput();//reset button
    //VIGENERE
    void vigenereOutputV(QString);//convert button
    void resetOutputV();//reset button
};

#endif // CONTROLLER_H
