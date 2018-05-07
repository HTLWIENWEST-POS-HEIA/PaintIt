/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_ffnen;
    QAction *action_Speichern_unter;
    QAction *action_Beenden;
    QAction *action_Optionen;
    QAction *action_ber_PaintIt;
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QToolButton *tbtnForegroundColor;
    QToolButton *tbtnBackgroundColor;
    QMenuBar *menuBar;
    QMenu *menu_Datei;
    QMenu *menu_Extras;
    QMenu *menu_Hilfe;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1164, 835);
        action_ffnen = new QAction(MainWindow);
        action_ffnen->setObjectName(QStringLiteral("action_ffnen"));
        action_Speichern_unter = new QAction(MainWindow);
        action_Speichern_unter->setObjectName(QStringLiteral("action_Speichern_unter"));
        action_Beenden = new QAction(MainWindow);
        action_Beenden->setObjectName(QStringLiteral("action_Beenden"));
        action_Optionen = new QAction(MainWindow);
        action_Optionen->setObjectName(QStringLiteral("action_Optionen"));
        action_ber_PaintIt = new QAction(MainWindow);
        action_ber_PaintIt->setObjectName(QStringLiteral("action_ber_PaintIt"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 1024, 768));
        tbtnForegroundColor = new QToolButton(centralWidget);
        tbtnForegroundColor->setObjectName(QStringLiteral("tbtnForegroundColor"));
        tbtnForegroundColor->setGeometry(QRect(1050, 338, 20, 20));
        tbtnBackgroundColor = new QToolButton(centralWidget);
        tbtnBackgroundColor->setObjectName(QStringLiteral("tbtnBackgroundColor"));
        tbtnBackgroundColor->setGeometry(QRect(1070, 360, 20, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1164, 21));
        menu_Datei = new QMenu(menuBar);
        menu_Datei->setObjectName(QStringLiteral("menu_Datei"));
        menu_Extras = new QMenu(menuBar);
        menu_Extras->setObjectName(QStringLiteral("menu_Extras"));
        menu_Hilfe = new QMenu(menuBar);
        menu_Hilfe->setObjectName(QStringLiteral("menu_Hilfe"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_Datei->menuAction());
        menuBar->addAction(menu_Extras->menuAction());
        menuBar->addAction(menu_Hilfe->menuAction());
        menu_Datei->addAction(action_ffnen);
        menu_Datei->addAction(action_Speichern_unter);
        menu_Datei->addSeparator();
        menu_Datei->addAction(action_Beenden);
        menu_Extras->addAction(action_Optionen);
        menu_Hilfe->addAction(action_ber_PaintIt);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        action_ffnen->setText(QApplication::translate("MainWindow", "&\303\226ffnen", 0));
        action_Speichern_unter->setText(QApplication::translate("MainWindow", "&Speichern unter", 0));
        action_Beenden->setText(QApplication::translate("MainWindow", "&Beenden", 0));
        action_Optionen->setText(QApplication::translate("MainWindow", "&Optionen", 0));
        action_ber_PaintIt->setText(QApplication::translate("MainWindow", "&\303\234ber PaintIt", 0));
        tbtnForegroundColor->setText(QString());
        tbtnBackgroundColor->setText(QString());
        menu_Datei->setTitle(QApplication::translate("MainWindow", "&Datei", 0));
        menu_Extras->setTitle(QApplication::translate("MainWindow", "&Extras", 0));
        menu_Hilfe->setTitle(QApplication::translate("MainWindow", "&Hilfe", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
