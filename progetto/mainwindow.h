#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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


class MainWindow : public QWidget
{
    Q_OBJECT
private:
    QTabWidget* menuTabs;


    //ne basta uno in questo caso dato che li devo creare ed inserire direttamente nel menuTab
    /*QWidget* cesareTab;
    QWidget* vigenereTab;
    QWidget* sha1Tab;*/



    /*//VIGENERE
    QTextEdit* inputTitle;
    QTextEdit* outputTitle;
    QTextEdit* keyTitle;
    QLabel* inputText;
    QLabel* outputText;
    QKeySequenceEdit* keyText;
    QRadioButton* encRadButton;
    QRadioButton* decRadButton;
    QPushButton* convertButton;
    QPushButton* copyButton;
    QPushButton* resetButton;

    //SHA1
    QTextEdit* inputTitle;
    QTextEdit* outputTitle;
    QLabel* inputText;
    QKeySequenceEdit* outputText;
    QRadioButton* utf8RadButton;
    QRadioButton* utf16RadButton;
    QPushButton* convertButton;
    QPushButton* copyButton;
    QPushButton* resetButton;
*/

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

};

#endif // MAINWINDOW_H
