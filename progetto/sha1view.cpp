#include "sha1View.h"
#include<QDebug>

sha1View::sha1View(QWidget*parent):QWidget(parent){
    inputTitle=new QLabel("input");
    outputTitle= new QLabel("output");
    keyTitle=new QLabel("key");
    inputText=new QTextEdit;
    outputText=new QTextEdit;
    keyText=new QSpinBox;
    encryptButton=new QRadioButton("encrypt");
    decryptButton= new QRadioButton("decrypt");
    convertButton=new QPushButton("converti");
    copyButton=new QPushButton("output copy");
    resetButton=new QPushButton("reset");
    //__box
    content=new QHBoxLayout;
    encdecBox=new QHBoxLayout;
    vBox1=new QVBoxLayout;
    vBox2=new QVBoxLayout;

    content->setAlignment(Qt::AlignCenter);

    vBox2->setAlignment(Qt::AlignCenter);
    encdecBox->setAlignment(Qt::AlignTop);
    inputTitle->setAlignment(Qt::AlignTop);
    outputTitle->setAlignment(Qt::AlignTop);
    inputTitle->setAlignment(Qt::AlignBottom);
    outputTitle->setAlignment(Qt::AlignBottom);

    content->addLayout(vBox1);
    content->addLayout(vBox2);

    vBox1->addWidget(inputTitle);
    vBox1->addWidget(inputText);
    vBox1->addWidget(outputTitle);
    vBox1->addWidget(outputText);


    vBox2->addLayout(encdecBox);
    encdecBox->addWidget(encryptButton);
    encdecBox->addWidget(decryptButton);
    vBox2->addWidget(convertButton);
    vBox2->addWidget(copyButton);
    vBox2->addWidget(resetButton);
    outputText->setReadOnly(true);



    setLayout(content);

    //CONVERT BUTTON
    connect(convertButton,SIGNAL(clicked(bool)),this,SLOT(convertS()));
}

void sha1View::convertS(){
    if(inputText->toPlainText()!="" && (encryptButton->isChecked()||decryptButton->isChecked()))
    {qDebug()<< inputText->toPlainText();
        emit convertMethodS(inputText->toPlainText());}
    else{/*errore input*/ }
}
void sha1View::sha1OutputS(QString s){
    qDebug() << "sei su sha1OutputS";
    //s è lungo 160bit

    outputText->insertPlainText(s);
}
