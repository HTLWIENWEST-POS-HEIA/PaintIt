#-------------------------------------------------
#
# Project created by QtCreator 2018-05-07T22:12:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PaintIt
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Tools/mybrushtool.cpp \
    Tools/mycircletool.cpp \
    Tools/myerasetool.cpp \
    Tools/myfillingtool.cpp \
    Tools/myrectangletool.cpp \
    mygraphicsscene.cpp \
    toolmanager.cpp \
    mainwindowactions.cpp

HEADERS  += mainwindow.h \
    Tools/mybrushtool.h \
    Tools/mycircletool.h \
    Tools/myerasetool.h \
    Tools/myfillingtool.h \
    Tools/myrectangletool.h \
    mygraphicsscene.h \
    toolbase.h \
    toolmanager.h \
    mytoolproperties.h

FORMS    += mainwindow.ui

RESOURCES += \
    resources.qrc
