#ifndef VIGENEREVIEW_H
#define VIGENEREVIEW_H
#include <QWidget>
#include <QMainWindow>
#include <QWidget>
#include <QTextEdit>
#include <QLabel>
#include <QSpinBox>
#include <QRadioButton>
#include <QPushButton>
#include <QKeySequenceEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QString>
#include <QLineEdit>

class vigenereView:public QWidget{
    Q_OBJECT
private:
    //__box
    QHBoxLayout* content;
    QHBoxLayout* encDecBox;
    QVBoxLayout* vBox1;
    QVBoxLayout* vBox2;
    QVBoxLayout* vBox3;
    //__obj
    QTextEdit* inputText;
    QTextEdit* outputText;
    QLabel* keyTitle;
    QLabel* inputTitle;
    QLabel* outputTitle;
    QLineEdit* keyText;
    QRadioButton* encRadButton;
    QRadioButton* decRadButton;
    QPushButton* convertButton;
    QPushButton* copyButton;
    QPushButton* resetButton;

public:
    explicit vigenereView(QWidget *parent = 0);
signals:
    //convert button
    void convertMethodV(QString,QString,bool);
    //copy button
    void copyMethodV(QString);
    //reset button
    void resetMethodV();
public slots:
    //convert button
    void convertV();
    void vigenereOutputV(QString);
    //copy button
    void copyOutputV();
    //reset button
    void resetV();
    void resetOutputV();

};

#endif // VIGENEREVIEW_H
