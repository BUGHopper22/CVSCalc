#include "sha1View.h"
#include<QDebug>

sha1View::sha1View(QWidget*parent):QWidget(parent){
    inputTitle=new QLabel("input");
    outputTitle= new QLabel("output");
    keyTitle=new QLabel("key");
    inputText=new QTextEdit;
    outputText=new QTextEdit;
    keyText=new QSpinBox;
    sha1Button=new QRadioButton("sha1");
    sha224Button=new QRadioButton("sha224");
    sha256Button=new QRadioButton("sha256");
    sha384Button=new QRadioButton("sha384");
    sha512Button=new QRadioButton("sha512");
    convertButton=new QPushButton("converti");
    copyButton=new QPushButton("output copy");
    resetButton=new QPushButton("reset");
    //__box
    content=new QHBoxLayout;
    shaBox=new QVBoxLayout;
    vBox1=new QVBoxLayout;
    vBox2=new QVBoxLayout;

    content->setAlignment(Qt::AlignCenter);

    vBox2->setAlignment(Qt::AlignCenter);
    shaBox->setAlignment(Qt::AlignTop);
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


    vBox2->addLayout(shaBox);
    shaBox->addWidget(sha1Button);
    shaBox->addWidget(sha224Button);
    shaBox->addWidget(sha256Button);
    shaBox->addWidget(sha384Button);
    shaBox->addWidget(sha512Button);

    vBox2->addWidget(convertButton);
    vBox2->addWidget(copyButton);
    vBox2->addWidget(resetButton);
    outputText->setReadOnly(true);



    setLayout(content);

    //CONVERT BUTTON
    connect(convertButton,SIGNAL(clicked()),this,SLOT(convertS()));
    //COPY BUTTON
    connect(copyButton,SIGNAL(clicked(bool)),this,SLOT(copyOutputS()));
    //CONVERT BUTTON
    connect(resetButton,SIGNAL(clicked(bool)),this,SLOT(resetS()));
}

//____CONVERT BUTTON
void sha1View::convertS(){
    int type=-1;
    int dim=-1;
    if(inputText->toPlainText()!=""){
        if(sha1Button->isChecked()){
            type=2; dim=20;
        }
        if(sha224Button->isChecked()){
            type=3; dim=20;
        }
        if(sha256Button->isChecked()){
            type=4; dim=32;
        }
        if(sha384Button->isChecked()){
            type=2; dim=48;
        }
        if(sha512Button->isChecked()){
            type=2; dim=64;
        }
    }

    if(type<0 || dim<0){//problemi con l' input
    }
    else
        emit convertMethodS(inputText->toPlainText(),type,dim);
}
void sha1View::sha1OutputS(QString s){
    outputText->clear();
    outputText->insertPlainText(s);
}

//COPY BUTTON
void sha1View::copyOutputS(){
    if(outputText->toPlainText()!="")
        outputText->selectAll();
    outputText->copy();
}
//RESET BUTTON
void sha1View::resetS(){
    emit resetMethodS();
}
void sha1View::resetOutputS(){
    inputText->clear();
    outputText->clear();
    keyText->clear();
}
