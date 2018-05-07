#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_Beenden_triggered()
{
    int ret = QMessageBox::warning(this,"Beenden","Achtung! Nicht gespeicherte Inhalte gehen beim Beenden verloren.\nWollen Sie das Programm wirklich beenden?",QMessageBox::Yes | QMessageBox::No);

    switch (ret)
    {
        case QMessageBox::Yes:
            QCoreApplication::quit();
            break;
        case QMessageBox::No:

            break;
    }

}

void MainWindow::on_tbtnForegroundColor_clicked()
{
    bool ok;
    QColor color = QColorDialog::getColor();
    if(ok)
    {
        QPixmap px(20, 20);
        px.fill(color);
        ui->tbtnForegroundColor->setIcon(px);
        foregroundColor = color;
    }
    else
    {
        //User clicked not ok
    }
}

void MainWindow::on_tbtnBackgroundColor_clicked()
{
    bool ok;
    QColor color = QColorDialog::getColor();
    if(ok)
    {
        QPixmap px(20, 20);
        px.fill(color);
        ui->tbtnBackgroundColor->setIcon(px);
        backgroundColor = color;
    }
    else
    {
        //User clicked not ok
    }
}
