#include "sha1View.h"

sha1View::sha1View(QWidget*parent):QWidget(parent){
    inputTitle=new QLabel("input");
    outputTitle= new QLabel("output");
    keyTitle=new QLabel("key");
    inputText=new QTextEdit;
    outputText=new QTextEdit;
    keyText=new QSpinBox;
    utf8Button=new QRadioButton("utf-8");
    utf16Button= new QRadioButton("utf-16");
    convertButton=new QPushButton("converti");
    copyButton=new QPushButton("output copy");
    resetButton=new QPushButton("reset");
    //__box
    content=new QHBoxLayout;
    utfBox=new QHBoxLayout;
    vBox1=new QVBoxLayout;
    vBox2=new QVBoxLayout;

    content->setAlignment(Qt::AlignCenter);

    vBox2->setAlignment(Qt::AlignCenter);
    utfBox->setAlignment(Qt::AlignTop);
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


    vBox2->addLayout(utfBox);
    utfBox->addWidget(utf8Button);
    utfBox->addWidget(utf16Button);
    vBox2->addWidget(convertButton);
    vBox2->addWidget(copyButton);
    vBox2->addWidget(resetButton);
    outputText->setReadOnly(true);



    setLayout(content);

    //CONVERT BUTTON
    connect(convertButton,SIGNAL(clicked(bool)),this,SLOT(convertS()));
}

void sha1View::convertS(){
    if(inputText->toPlainText()!="" && (utf8Button->isChecked()||utf16Button->isChecked()))
        emit convertMethodS(inputText->toPlainText());
    else{/*errore input*/ }
}
void sha1View::sha1OutputS(QString s){
    outputText->clear();
    outputText->insertPlainText(s);
}
