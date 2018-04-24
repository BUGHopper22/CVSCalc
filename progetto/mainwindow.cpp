#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"
#include <cifrariocesare.h>
#include <cesareView.h>
using namespace std;

MainWindow::MainWindow(QWidget *parent):QWidget(parent)
{
    this->setFixedSize(1000,500);
    this->setWindowTitle("Dyh Fhvduh");
    this->setStyleSheet("font-size: large;");





    /*menuTabs=new QTabWidget;
    cesareView=new QWidget();
    vigenereTab=new QWidget();
    sha1Tab=new QWidget();*/


    menuTabs=new QTabWidget;



    //creo le tab del menu vuote
    menuTabs->addTab(new cesareView(),"cifrario Cesare");
    menuTabs->addTab(new cesareView(),"cifrario Vigenere");
    menuTabs->addTab(new cesareView(),"sha-1");

    //CESARE




    //connect(buttonBox, &QDialogButtonBox::accepted, this, &QDialog::accept);
    //connect(buttonBox, &QDialogButtonBox::rejected, this, &QDialog::reject);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(menuTabs);
    setLayout(mainLayout);

}

MainWindow::~MainWindow()
{
}

/*void MainWindow::on_pushButton_3_clicked()
{
    QString s = ui->textEdit_3->toPlainText();
    cifrarioCesare c(s,3);
    ui->plainTextEdit->setPlainText(c.getText());
    c.encrypt();
    ui->plainTextEdit->setPlainText(c.getCiph());

}*/

