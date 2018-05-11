#ifndef CESAREVIEW_H
#define CESAREVIEW_H
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

class cesareView:public QWidget{
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
    QSpinBox* keyText;
    QRadioButton* encRadButton;
    QRadioButton* decRadButton;
    QPushButton* convertButton;
    QPushButton* copyButton;
    QPushButton* resetButton;

    QWidget* contenitore;

public:
    explicit cesareView(QWidget *parent = 0);
signals:
    //convert button
    void convertMethod(QString,int,bool);
    //copy button
    void copyMethod(QString);
    //reset button
    void resetMethod();
public slots:
    //convert button
    void convert();
    void cesareOutput(QString);
    //copy button
    void copyOutput();
    //reset button
    void reset();
    void resetOutput();

};

#endif // CESARETAB_H
