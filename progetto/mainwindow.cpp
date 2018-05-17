#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"
#include <cifrariocesare.h>
#include <cesareView.h>
#include <vigenereView.h>
#include <sha1View.h>
#include <QFileSystemModel>

using namespace std;

MainWindow::MainWindow(QWidget *parent):QWidget(parent)
{
    this->setFixedSize(1000,500);
    this->setWindowTitle("Dyh Fhvduh");
    this->setStyleSheet("font-size: large;");

    QVBoxLayout *mainLayout = new QVBoxLayout;

    menuTabs=new QTabWidget;
    menuTabs->addTab(new cesareView(),"Caesar code");
    menuTabs->addTab(new vigenereView(),"Vigenere code");
    menuTabs->addTab(new sha1View(),"sha");
    mainLayout->addWidget(menuTabs);

    //Label->setText("<font color='red'>Some text</font>");
    //QFile res(":/img/font/Aaargh.ttf");
    //QFileSystemModel model;
    //set model
    QFont f;
    f.setFamily("ARG");
    f.setPointSize(15);
    setFont(f);
    setLayout(mainLayout);


}

QTabWidget* MainWindow::getTabWidget() const{
    return menuTabs;
}

MainWindow::~MainWindow(){}


