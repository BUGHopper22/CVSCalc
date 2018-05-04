#include "cesareView.h"
#include "cifrariocesare.h"
#include "controller.h"


cesareView::cesareView(QWidget *parent):QWidget(parent){

    inputTitle=new QLabel("input");
    outputTitle= new QLabel("output");
    keyTitle=new QLabel("key");
    inputText=new QTextEdit;
    outputText=new QTextEdit;
    keyText=new QSpinBox;
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

    //cesareTab->addLayout(content);
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

    vBox2->addWidget(keyTitle);
    encDecBox->addWidget(keyText);
    vBox2->addLayout(encDecBox);
    encDecBox->addWidget(encRadButton);
    encDecBox->addWidget(decRadButton);
    vBox2->addWidget(convertButton);
    vBox2->addWidget(copyButton);
    vBox2->addWidget(resetButton);
    outputText->setReadOnly(true);



    setLayout(content);

    //CONVERT BUTTON
    connect(convertButton,SIGNAL(clicked(bool)),this,SLOT(convert()));
    //COPY BUTTON
    connect(copyButton,SIGNAL(clicked(bool)),this,SLOT(copyOutput()));
    //CONVERT BUTTON
    connect(resetButton,SIGNAL(clicked(bool)),this,SLOT(reset()));
}

//CONVERT BUTTON
void cesareView::convert(){
    if(inputText->toPlainText()!="" && (encRadButton->isChecked()||decRadButton->isChecked()))
        emit convertMethod(inputText->toPlainText(),keyText->value(),encRadButton->isChecked());
    else{/*errore input*/ }
}
void cesareView::cesareOutput(QString s){
    outputText->clear();
    outputText->insertPlainText(s);
}

//COPY BUTTON
void cesareView::copyOutput(){
    if(outputText->toPlainText()!="")
        outputText->selectAll();
    outputText->copy();

        //emit outputText->copyAvailable(true);
}
//RESET BUTTON
void cesareView::reset(){
    emit resetMethod();
}
void cesareView::resetOutput(){
    inputText->clear();
    outputText->clear();
    keyText->clear();
}
