#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::on_action_Beenden_triggered() {
    int ret = QMessageBox::warning(this, "Beenden", "Achtung! Nicht gespeicherte Inhalte gehen beim Beenden verloren.\nWollen Sie das Programm wirklich beenden?", QMessageBox::Yes | QMessageBox::No);

    switch (ret) {
        case QMessageBox::Yes:
            QCoreApplication::quit();
            break;
        case QMessageBox::No:
            break;
    }

}

void MainWindow::on_tbtnForegroundColor_clicked() {
    QColor color = QColorDialog::getColor();
    QPixmap px(20, 20);
    px.fill(color);
    ui->tbtnForegroundColor->setIcon(px);
    scene->tm->setColor(color, 0);
    //QMessageBox::information(this,"Information",foregroundColor.name(),QMessageBox::Ok);
}

void MainWindow::on_tbtnBackgroundColor_clicked() {
    QColor color = QColorDialog::getColor();
    QPixmap px(20, 20);
    px.fill(color);
    ui->tbtnBackgroundColor->setIcon(px);
    scene->tm->setColor(color, 1);
    //QMessageBox::information(this,"Information",backgroundColor.name(),QMessageBox::Ok);
}

void MainWindow::on_tbtnStamp_clicked() {
    //QMessageBox::information(this,"Information","Stamp is selected",QMessageBox::Ok);
}

void MainWindow::on_tbtnBrush_clicked() {
    scene->tm->setActiveTool(dynamic_cast<ToolBase*>(new MyBrushTool()));
    //QMessageBox::information(this,"Information","Brush is selected",QMessageBox::Ok);
}

void MainWindow::on_tbtnLine_clicked() {
    //QMessageBox::information(this,"Information","LineTool is selected",QMessageBox::Ok);
}

void MainWindow::on_tbtnFill_clicked() {
    QPixmap myPixmap = ui->graphicsView->grab();
    scene->tm->setActiveTool(dynamic_cast<ToolBase*>(new MyFillingTool(myPixmap)));
    //QMessageBox::information(this,"Information","FillTool is selected",QMessageBox::Ok);
}

void MainWindow::on_tbtnText_clicked() {
    //QMessageBox::information(this,"Information","TextTool is selected",QMessageBox::Ok);
}

void MainWindow::on_tbtnSpray_clicked() {
    //QMessageBox::information(this,"Information","Spray is selected",QMessageBox::Ok);
}

void MainWindow::on_tbtnSwapColors_clicked() {
    //swap colors in global vars
    QColor color = scene->tm->getColor(0);
    scene->tm->setColor(scene->tm->getColor(1), 0);
    scene->tm->setColor(color, 1);

    //swap colors on the color buttons
    QPixmap px(20, 20);
    px.fill(scene->tm->getColor(0));
    ui->tbtnForegroundColor->setIcon(px);
    px.fill(scene->tm->getColor(1));
    ui->tbtnBackgroundColor->setIcon(px);

    //QMessageBox::information(this,"Information",foregroundColor.name(),QMessageBox::Ok);
    //QMessageBox::information(this,"Information",backgroundColor.name(),QMessageBox::Ok);
}

void MainWindow::on_spinBox_Radius_valueChanged(int radius) {
    scene->tm->setMyRadius(radius);
}

void MainWindow::on_spinBox_LineWidth_valueChanged(int lineWidth) {
    scene->tm->setLineWidth(lineWidth);
}
