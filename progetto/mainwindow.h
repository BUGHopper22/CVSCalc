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
public:
    QTabWidget* getTabWidget() const;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


};

#endif // MAINWINDOW_H
