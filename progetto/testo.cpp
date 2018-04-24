#include "testo.h"
#include<QChar>

testo::testo(QString s):text(s){

}

const ushort testo::alphSize=26;


QChar testo::getLetter(int i) const {
    return text.at(i);
}

int testo::getSize() const{
    return text.size();
}

void testo::reset(){
    text.clear();
}

QString testo::getText(){
    return text;
}
