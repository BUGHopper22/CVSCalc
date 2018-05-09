
#-------------------------------------------------
#
# Project created by QtCreator 2018-03-26T15:15:12
#
#-------------------------------------------------

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TARGET = progetto
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    main.cpp \
    mainwindow.cpp \
    cesareView.cpp \
    cifrariocesare.cpp \
    cifrariovigenere.cpp \
    controller.cpp \
    sha1.cpp \
    sha1view.cpp \
    testo.cpp \
    vigenereview.cpp\

HEADERS += \
    cesareView.h \
    cifrariocesare.h \
    cifrariovigenere.h \
    controller.h \
    mainwindow.h \
    sha1.h \
    sha1view.h \
    testo.h \
    ui_mainwindow.h \
    vigenereView.h

FORMS += \
        mainwindow.ui

DISTFILES += \
    img/checkBoxDisable.png \
    img/checkBoxHover.png \
    img/buttonActivate.png \
    img/buttonHover.png \
    img/buttonNormal.png \
    img/checkChecked.png \
    img/checkBoxUnchecked.png \
    img/spinBoxBackground.png \
    img/spinBoxDownButtonChecked.png \
    img/spinBoxDownButtonNormal.png \
    img/spinBoxUpButtonHover.png \
    img/spinBoxUpButtonNormal.png \
    img/arrowDown.png \
    img/arrowUp.png

RESOURCES += \
    stylesheet.qrc
