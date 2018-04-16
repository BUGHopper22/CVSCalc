#ifndef TESTO_H
#define TESTO_H
#include<Qvector>
#include<Qstring>
#include<QChar>
using namespace std;

class testo{
private:
    QString text;

public:
    testo(QString text="");
    static const ushort alphSize;//probabilmente nella parte privata?
    QChar getLetter(int) const;
    int getSize() const ;
    virtual void reset();
    //virtual ~testo();
    virtual void encrypt() =0;
    virtual void decrypt() =0;

};







#endif // TESTO_H
