#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{




/*const QString text="ciao";
QByteArray byteMsg(text);
QBitArray bitMsg(text.size()*8);
//binMsg.insert(0,text);
for(int i=0; i<byteMsg.count(); ++i) {
    for(int b=0; b<8;b++) {
        bitMsg.setBit( i*8+b, byteMsg.at(i)&(1<<(7-b)) );
        std::cout<<(1<<(7-b))<<" ";
    }
}
//for (int i=0;i<text.size();i++)
  //      std::cout<<binMsg[i];

   /* int dimChar =sizeof(char)*CHAR_BIT;
    QString text="ciao";   //text campo dati della classe base astratta, pensare meglio !! usato come se fosse un Qstring
    const unsigned int dimArray=dimChar*text.size();
    std::bitset<dimArray> bitset3(std::string(text));
    QBitArray binMsg(dimArray);
    for ( int i = 0 ; i < dimArray ; i++ )
            binMsg[i] = bitset3[i];
            std::cout<<binMsg[i]<<" ";
    std::cout<<dimArray<<" ";

/*    QByteArray array(QByteArray::fromStdString("ciaoooo"));
    //array(QByteArray::fromStdString("ciaoooo"));
    //array.fromStdString("ciao");
    QByteArray::iterator it=array.begin();

    for(int i=0;i<5;i++){
        std::cout<<array[i]<<" ";
    }

    for(;it<array.end();it++){
        std::cout<<*it<<" "<<array.size();
    }*/

    delete ui;
}
