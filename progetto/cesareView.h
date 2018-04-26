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

class cesareView:public QWidget{
    Q_OBJECT
private:
    //CESARE
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
public:
    explicit cesareView(QWidget *parent = 0);
};

#endif // CESARETAB_H
