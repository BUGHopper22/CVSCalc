#include "cesareView.h"


cesareView::cesareView(QWidget *parent):QWidget(parent){

    inputTitle=new QTextEdit("input");
    outputTitle= new QTextEdit("output");
    keyTitle=new QTextEdit;
    inputText=new QLabel;
    outputText=new QLabel;
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

    vBox2->addWidget(keyText);
    encDecBox->addWidget(keyText);
    vBox2->addLayout(encDecBox);
    encDecBox->addWidget(encRadButton);
    encDecBox->addWidget(decRadButton);
    vBox2->addWidget(convertButton);
    vBox2->addWidget(copyButton);
    vBox2->addWidget(resetButton);

    setLayout(content);
}
