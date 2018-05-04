#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"
#include <cifrariocesare.h>
#include <cesareView.h>
#include <vigenereView.h>
#include <sha1View.h>
using namespace std;

MainWindow::MainWindow(QWidget *parent):QWidget(parent)
{
    this->setFixedSize(1000,500);
    this->setWindowTitle("Dyh Fhvduh");
    this->setStyleSheet("font-size: large;");

    QVBoxLayout *mainLayout = new QVBoxLayout;

    menuTabs=new QTabWidget;
    menuTabs->addTab(new cesareView(),"cifrario Cesare");
    menuTabs->addTab(new vigenereView(),"cifrario Vigenere");
    menuTabs->addTab(new sha1View(),"sha-1");
    mainLayout->addWidget(menuTabs);
    setLayout(mainLayout);


}

QTabWidget* MainWindow::getTabWidget() const{
    return menuTabs;
}

MainWindow::~MainWindow(){}


