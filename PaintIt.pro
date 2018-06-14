#-------------------------------------------------
#
# Project created by QtCreator 2018-05-07T22:12:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PaintIt
TEMPLATE = app

CONFIG += c++11

SOURCES += main.cpp\
        mainwindow.cpp \
    Tools/mybrushtool.cpp \
    Tools/mycircletool.cpp \
    Tools/myerasetool.cpp \
    Tools/myfillingtool.cpp \
    Tools/myrectangletool.cpp \
    mygraphicsscene.cpp \
    toolmanager.cpp \
    mainwindowactions.cpp \
    Tools/mytexttool.cpp \
    Tools/mylinetool.cpp \
    Tools/mystamptool.cpp \
    Tools/myspraytool.cpp \
    Tools/myfreezetool.cpp

HEADERS  += mainwindow.h \
    Tools/mybrushtool.h \
    Tools/mycircletool.h \
    Tools/myerasetool.h \
    Tools/myfillingtool.h \
    Tools/myrectangletool.h \
    mygraphicsscene.h \
    toolbase.h \
    toolmanager.h \
    mytoolproperties.h \
    Tools/mytexttool.h \
    Tools/mylinetool.h \
    Tools/mystamptool.h \
    Tools/myspraytool.h \
    Tools/myfreezetool.h

FORMS    += mainwindow.ui

RESOURCES += \
    resources.qrc
