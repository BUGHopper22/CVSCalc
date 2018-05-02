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
    //w.show();
public:
    controller();
    ~controller();
    void showC();
public slots:
    //CESARE
    void convert(QString,int,bool);

};

#endif // CONTROLLER_H
