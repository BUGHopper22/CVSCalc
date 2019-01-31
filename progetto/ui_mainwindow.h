/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/
/*
#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QKeySequenceEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
/*#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QTextEdit *textEdit_3;
    QGroupBox *verticalGroupBox_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QPlainTextEdit *plainTextEdit;
    QWidget *tab_2;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QTextEdit *textEdit_4;
    QVBoxLayout *verticalLayout_8;
    QFormLayout *formLayout;
    QPushButton *pushButton_6;
    QPushButton *pushButton_9;
    QPushButton *pushButton_5;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QLabel *label_8;
    QKeySequenceEdit *keySequenceEdit;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_9;
    QPlainTextEdit *plainTextEdit_2;
    QWidget *tab_3;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTextEdit *textEdit;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QPushButton *pushButton;
    QPushButton *pushButton_7;
    QPushButton *pushButton_2;
    QWidget *tab_4;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1000, 530);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 25, 931, 461));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(891, 451));
        tabWidget->setMaximumSize(QSize(1000, 600));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        horizontalLayoutWidget_4 = new QWidget(tab);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(10, 10, 901, 421));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(10, 10, 10, 10);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_5 = new QLabel(horizontalLayoutWidget_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_5->addWidget(label_5);

        textEdit_3 = new QTextEdit(horizontalLayoutWidget_4);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));

        verticalLayout_5->addWidget(textEdit_3);


        horizontalLayout_4->addLayout(verticalLayout_5);

        verticalGroupBox_4 = new QGroupBox(horizontalLayoutWidget_4);
        verticalGroupBox_4->setObjectName(QStringLiteral("verticalGroupBox_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(verticalGroupBox_4->sizePolicy().hasHeightForWidth());
        verticalGroupBox_4->setSizePolicy(sizePolicy1);
        verticalGroupBox_4->setBaseSize(QSize(0, 0));
        verticalGroupBox_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        verticalGroupBox_4->setFlat(false);
        verticalGroupBox_4->setCheckable(false);
        verticalLayout_4 = new QVBoxLayout(verticalGroupBox_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_4 = new QLabel(verticalGroupBox_4);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_4->addWidget(label_4);

        spinBox = new QSpinBox(verticalGroupBox_4);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        verticalLayout_4->addWidget(spinBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        radioButton_4 = new QRadioButton(verticalGroupBox_4);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        horizontalLayout_3->addWidget(radioButton_4);

        radioButton_3 = new QRadioButton(verticalGroupBox_4);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        horizontalLayout_3->addWidget(radioButton_3);


        verticalLayout_4->addLayout(horizontalLayout_3);

        pushButton_3 = new QPushButton(verticalGroupBox_4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout_4->addWidget(pushButton_3);

        pushButton_8 = new QPushButton(verticalGroupBox_4);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        verticalLayout_4->addWidget(pushButton_8);

        pushButton_4 = new QPushButton(verticalGroupBox_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout_4->addWidget(pushButton_4);


        horizontalLayout_4->addWidget(verticalGroupBox_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_6 = new QLabel(horizontalLayoutWidget_4);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_6->addWidget(label_6);

        plainTextEdit = new QPlainTextEdit(horizontalLayoutWidget_4);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setEnabled(false);

        verticalLayout_6->addWidget(plainTextEdit);


        horizontalLayout_4->addLayout(verticalLayout_6);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        horizontalLayoutWidget_5 = new QWidget(tab_2);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(10, 10, 901, 421));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(10, 10, 10, 10);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_7 = new QLabel(horizontalLayoutWidget_5);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_7->addWidget(label_7);

        textEdit_4 = new QTextEdit(horizontalLayoutWidget_5);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));

        verticalLayout_7->addWidget(textEdit_4);


        horizontalLayout_5->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        pushButton_6 = new QPushButton(horizontalLayoutWidget_5);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        formLayout->setWidget(2, QFormLayout::SpanningRole, pushButton_6);

        pushButton_9 = new QPushButton(horizontalLayoutWidget_5);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        formLayout->setWidget(3, QFormLayout::SpanningRole, pushButton_9);

        pushButton_5 = new QPushButton(horizontalLayoutWidget_5);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        formLayout->setWidget(4, QFormLayout::SpanningRole, pushButton_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        radioButton_5 = new QRadioButton(horizontalLayoutWidget_5);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));

        horizontalLayout_6->addWidget(radioButton_5);

        radioButton_6 = new QRadioButton(horizontalLayoutWidget_5);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));

        horizontalLayout_6->addWidget(radioButton_6);


        formLayout->setLayout(0, QFormLayout::SpanningRole, horizontalLayout_6);

        label_8 = new QLabel(horizontalLayoutWidget_5);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_8);

        keySequenceEdit = new QKeySequenceEdit(horizontalLayoutWidget_5);
        keySequenceEdit->setObjectName(QStringLiteral("keySequenceEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, keySequenceEdit);


        verticalLayout_8->addLayout(formLayout);


        horizontalLayout_5->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_9 = new QLabel(horizontalLayoutWidget_5);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_9->addWidget(label_9);

        plainTextEdit_2 = new QPlainTextEdit(horizontalLayoutWidget_5);
        plainTextEdit_2->setObjectName(QStringLiteral("plainTextEdit_2"));
        plainTextEdit_2->setEnabled(false);

        verticalLayout_9->addWidget(plainTextEdit_2);


        horizontalLayout_5->addLayout(verticalLayout_9);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        horizontalLayoutWidget = new QWidget(tab_3);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(9, 9, 911, 421));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 10, 10, 10);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        textEdit = new QTextEdit(horizontalLayoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout_2->addWidget(textEdit);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        lineEdit = new QLineEdit(horizontalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);

        verticalLayout_2->addWidget(lineEdit);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setSizeConstraint(QLayout::SetDefaultConstraint);
        radioButton_2 = new QRadioButton(horizontalLayoutWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout_7->addWidget(radioButton_2);

        radioButton = new QRadioButton(horizontalLayoutWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        horizontalLayout_7->addWidget(radioButton);


        verticalLayout->addLayout(horizontalLayout_7);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_7 = new QPushButton(horizontalLayoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        verticalLayout->addWidget(pushButton_7);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_5->setText(QApplication::translate("MainWindow", "Input", 0));
        label_4->setText(QApplication::translate("MainWindow", "key", 0));
        radioButton_4->setText(QApplication::translate("MainWindow", "encrypt", 0));
        radioButton_3->setText(QApplication::translate("MainWindow", "decrypt", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "convert", 0));
        pushButton_8->setText(QApplication::translate("MainWindow", "output copy", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "reset", 0));
        label_6->setText(QApplication::translate("MainWindow", "Output", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "cifrario di Cesare", 0));
        label_7->setText(QApplication::translate("MainWindow", "Input", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "reset", 0));
        pushButton_9->setText(QApplication::translate("MainWindow", "output copy", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "convert", 0));
        radioButton_5->setText(QApplication::translate("MainWindow", "encrypt", 0));
        radioButton_6->setText(QApplication::translate("MainWindow", "decrypt", 0));
        label_8->setText(QApplication::translate("MainWindow", "key", 0));
        label_9->setText(QApplication::translate("MainWindow", "Output", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "cifrario di Vigen\303\250re", 0));
        label->setText(QApplication::translate("MainWindow", "input", 0));
        label_2->setText(QApplication::translate("MainWindow", "output", 0));
        radioButton_2->setText(QApplication::translate("MainWindow", "UTF-8", 0));
        radioButton->setText(QApplication::translate("MainWindow", "UTF-16", 0));
        pushButton->setText(QApplication::translate("MainWindow", "convert", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "output copy", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "reset", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "sha-1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Page", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

*/
