#include "controller.h"
#include "cifrarioCesare.h"
#include "cesareView.h"
#include "sha1.h"

controller::controller():w(new MainWindow()),cesare(),vigenere(){

    //CONVERT BUTTON
    connect(w->getTabWidget()->widget(0),SIGNAL(convertMethod(QString,int,bool)),this,SLOT(convert(QString,int,bool)));
    connect(this,SIGNAL(cesareOutput(QString)),w->getTabWidget()->widget(0),SLOT(cesareOutput(QString)));
    // connect(w, SIGNAL(convertMethod(QString,ushort,bool)) , this,SLOT( convert(QString,ushort,bool)));
    //connect(this,SIGNAL(cesareOutputS(cifrarioCesare)),w,SLOT(cesareOutput(cifrarioCesare)));
    //RESET BUTTON
    connect(w->getTabWidget()->widget(0),SIGNAL(resetMethod()),this,SLOT(reset()));
    connect(this,SIGNAL(resetOutput()),w->getTabWidget()->widget(0),SLOT(resetOutput()));
}

void controller::showC(){
    w->show();
    //connect(cesareView,SIGNAL(clicked()),this,SLOT(convert()));
    //connect(buttonlogin,SIGNAL(clicked()),this,SLOT(login()));
}

void controller::convert(QString s,int u,bool b){
    cesare.reset();
    cesare.setText(s);
    cesare.setCiph(s);
    cesare.setShift(u);
    cesare.setCheck(b);
    cesare.converti();
    emit cesareOutput(cesare.getCiph());
}

void controller::reset(){//occhio alla seconda connect probabilmente inutile
    cesare.reset();
    emit resetOutput();
}




controller::~controller(){}
