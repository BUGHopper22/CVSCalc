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

    return a.exec();
}
