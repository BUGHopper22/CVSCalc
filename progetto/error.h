#ifndef ERROR_H
#define ERROR_H
#include <QChar>

class Error{
private:
    QChar type;
public:
    Error(QChar);
    QChar getType()const;
};

#endif // ERROR_H
