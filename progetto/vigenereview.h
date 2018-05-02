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

class vigenereView:public QWidget{
    Q_OBJECT
private:
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
    QKeySequenceEdit* keyText;
    QRadioButton* encRadButton;
    QRadioButton* decRadButton;
    QPushButton* convertButton;
    QPushButton* copyButton;
    QPushButton* resetButton;
public:
    explicit vigenereView(QWidget *parent = 0);
};

#endif // VIGENEREVIEW_H
