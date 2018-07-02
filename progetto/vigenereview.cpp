#include "vigenereView.h"

vigenereView::vigenereView(QWidget *parent):QWidget(parent){

    inputTitle=new QLabel("input");
    outputTitle= new QLabel("output");
    keyTitle=new QLabel("key");
    inputText=new QTextEdit;
    outputText=new QTextEdit;
    keyText=new QLineEdit;
    encRadButton=new QRadioButton("encrypt");
    decRadButton= new QRadioButton("decrypt");
    convertButton=new QPushButton("converti");
    copyButton=new QPushButton("output copy");
    resetButton=new QPushButton("reset");
    //__box
    content=new QHBoxLayout;
    encDecBox=new QHBoxLayout;
    vBox1=new QVBoxLayout;
    vBox2=new QVBoxLayout;
    vBox3=new QVBoxLayout;

    content->setAlignment(Qt::AlignCenter);
    vBox2->setAlignment(Qt::AlignCenter);
    encDecBox->setAlignment(Qt::AlignTop);
    inputTitle->setAlignment(Qt::AlignTop);
    outputTitle->setAlignment(Qt::AlignTop);
    inputTitle->setAlignment(Qt::AlignBottom);
    outputTitle->setAlignment(Qt::AlignBottom);

    content->addLayout(vBox1);
    content->addLayout(vBox2);
    content->addLayout(vBox3);

    vBox1->addWidget(inputTitle);
    vBox1->addWidget(inputText);

    vBox3->addWidget(outputTitle);
    vBox3->addWidget(outputText);

    //vBox2
    vBox2->addWidget(keyTitle);
    vBox2->addWidget(keyText);


    vBox2->addWidget(convertButton);
    vBox2->addLayout(encDecBox);
    encDecBox->addWidget(encRadButton);
    encRadButton->setChecked(true);
    encDecBox->addWidget(decRadButton);
    vBox2->addWidget(copyButton);
    vBox2->addWidget(resetButton);
    outputText->setReadOnly(true);

    inputText->setObjectName("vigenereText");
    outputText->setObjectName("vigenereText");

    setLayout(content);

    //CONVERT BUTTON
    connect(convertButton,SIGNAL(clicked(bool)),this,SLOT(convertV()));
    //COPY BUTTON
    connect(copyButton,SIGNAL(clicked(bool)),this,SLOT(copyOutputV()));
    //RESET BUTTON
    connect(resetButton,SIGNAL(clicked(bool)),this,SLOT(resetV()));
}

//CONVERT BUTTON
void vigenereView::convertV(){
    //if(inputText->toPlainText()!="" && (encRadButton->isChecked()||decRadButton->isChecked()))
        emit convertMethodV(inputText->toPlainText(),keyText->text(),encRadButton->isChecked());
    //else{//errore input
 //}
}
void vigenereView::vigenereOutputV(QString s){
    outputText->clear();
    outputText->insertPlainText(s);
}

//COPY BUTTON
void vigenereView::copyOutputV(){
    if(outputText->toPlainText()!="")
        outputText->selectAll();
    outputText->copy();

        //emit outputText->copyAvailable(true);
}
//RESET BUTTON
void vigenereView::resetV(){
    emit resetMethodV();
}
void vigenereView::resetOutputV(){
    inputText->clear();
    outputText->clear();
    keyText->clear();
}
