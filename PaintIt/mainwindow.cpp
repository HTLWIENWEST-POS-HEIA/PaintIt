#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    foregroundColor.setRgb(0,0,0,255);
    backgroundColor.setRgb(255,255,255,255);
    QPixmap px(20, 20);
    px.fill(foregroundColor);
    ui->tbtnForegroundColor->setIcon(px);
    px.fill(backgroundColor);
    ui->tbtnBackgroundColor->setIcon(px);
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
        //QMessageBox::information(this,"Information",foregroundColor.name(),QMessageBox::Ok);
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
        //QMessageBox::information(this,"Information",backgroundColor.name(),QMessageBox::Ok);
    }
    else
    {
        //User clicked not ok
    }
}

void MainWindow::on_tbtnStamp_clicked()
{
    //QMessageBox::information(this,"Information","Stamp is selected",QMessageBox::Ok);
}

void MainWindow::on_tbtnBrush_clicked()
{
    //QMessageBox::information(this,"Information","Brush is selected",QMessageBox::Ok);
}

void MainWindow::on_tbtnLine_clicked()
{
    //QMessageBox::information(this,"Information","LineTool is selected",QMessageBox::Ok);
}

void MainWindow::on_tbtnFill_clicked()
{
    //QMessageBox::information(this,"Information","FillTool is selected",QMessageBox::Ok);
}

void MainWindow::on_tbtnText_clicked()
{
    //QMessageBox::information(this,"Information","TextTool is selected",QMessageBox::Ok);
}

void MainWindow::on_tbtnSpray_clicked()
{
    //QMessageBox::information(this,"Information","Spray is selected",QMessageBox::Ok);
}

void MainWindow::on_tbtnSwapColors_clicked()
{
    //swap colors in global vars
    QColor color = foregroundColor;
    foregroundColor = backgroundColor;
    backgroundColor = color;

    //swap colors on the color buttons
    QPixmap px(20, 20);
    px.fill(foregroundColor);
    ui->tbtnForegroundColor->setIcon(px);
    px.fill(backgroundColor);
    ui->tbtnBackgroundColor->setIcon(px);

    //QMessageBox::information(this,"Information",foregroundColor.name(),QMessageBox::Ok);
    //QMessageBox::information(this,"Information",backgroundColor.name(),QMessageBox::Ok);
}
