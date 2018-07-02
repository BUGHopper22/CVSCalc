#include "error.h"

Error::Error(QChar s):type(s){}
QChar Error::getType()const{return type;}
