#include "testo.h"
#include<QChar>

const ushort testo::alphSize=26;

testo::testo(QString s):text(s){}

//___SETTER___
void testo::setText(QString s){text.clear();text.append(s);}
//___GETTER___
QString testo::getText() const{ return text; }
QChar testo::getLetter(int i) const { return text.at(i); }
int testo::getSize() const{ return text.size(); }

void testo::reset(){ text.clear(); }


