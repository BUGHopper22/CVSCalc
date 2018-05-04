#ifndef SHA1VIEW_H
#define SHA1VIEW_H
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

class sha1View:public QWidget{
    Q_OBJECT
private:
    //__box
    QHBoxLayout* content;
    QHBoxLayout* utfBox;
    QVBoxLayout* vBox1;
    QVBoxLayout* vBox2;
    QVBoxLayout* vBox3;
    //__obj
    QTextEdit* inputText;
    QLineEdit* outputText;
    QLabel* keyTitle;
    QLabel* inputTitle;
    QLabel* outputTitle;
    QSpinBox* keyText;
    QRadioButton* utf8Button;
    QRadioButton* utf16Button;
    QPushButton* convertButton;
    QPushButton* copyButton;
    QPushButton* resetButton;
public:
    explicit sha1View(QWidget*parent = 0);
};

#endif // SHA1VIEW_H
