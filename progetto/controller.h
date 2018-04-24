#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "mainwindow.h"
#include <QApplication>


class controller:public QObject{
    Q_OBJECT
private:
    MainWindow* w;
    //w.show();
public:
    controller();
    ~controller();
};

#endif // CONTROLLER_H
