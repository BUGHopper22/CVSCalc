#include "controller.h"
#include "cifrarioCesare.h"
#include "cesareView.h"
#include "sha1.h"

controller::controller():w(new MainWindow()),cesare(),vigenere(){
//_____CESARE_____//
    //CONVERT BUTTON
    connect(w->getTabWidget()->widget(0),SIGNAL(convertMethod(QString,int,bool)),this,SLOT(convert(QString,int,bool)));
    connect(this,SIGNAL(cesareOutput(QString)),w->getTabWidget()->widget(0),SLOT(cesareOutput(QString)));
    //RESET BUTTON
    connect(w->getTabWidget()->widget(0),SIGNAL(resetMethod()),this,SLOT(reset()));
    connect(this,SIGNAL(resetOutput()),w->getTabWidget()->widget(0),SLOT(resetOutput()));
//_____VIGENERE_____//
    //CONVERT BUTTON
    connect(w->getTabWidget()->widget(1),SIGNAL(convertMethodV(QString,QString,bool)),this,SLOT(convertV(QString,QString,bool)));
    connect(this,SIGNAL(vigenereOutputV(QString)),w->getTabWidget()->widget(1),SLOT(vigenereOutputV(QString)));
    //RESET BUTTON
    connect(w->getTabWidget()->widget(1),SIGNAL(resetMethodV()),this,SLOT(resetV()));
    connect(this,SIGNAL(resetOutputV()),w->getTabWidget()->widget(1),SLOT(resetOutputV()));
}

void controller::showC(){w->show();}

//_____CESARE_____
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

//_____VIGENERE_____
void controller::convertV(QString s,QString k,bool b){
    vigenere.reset();
    vigenere.setText(s);
    vigenere.setCiph(s);
    vigenere.setKey(k);
    vigenere.setCheck(b);
    vigenere.converti();
    emit vigenereOutputV(vigenere.getCiph());
}
void controller::resetV(){
    vigenere.reset();
    emit resetOutputV();
}




controller::~controller(){}
