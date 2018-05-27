#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QColor>
#include <QMainWindow>
#include <QMessageBox>
#include <QColorDialog>
#include "mygraphicsscene.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_tbtnLine_clicked();
    void on_tbtnFill_clicked();
    void on_tbtnText_clicked();
    void on_tbtnStamp_clicked();
    void on_tbtnBrush_clicked();
    void on_tbtnSpray_clicked();
    void on_tbtnSwapColors_clicked();
    void on_action_Beenden_triggered();
    void on_tbtnForegroundColor_clicked();
    void on_tbtnBackgroundColor_clicked();
    void on_spinBox_Radius_valueChanged(int radius);
    void on_spinBox_LineWidth_valueChanged(int lineWidth);

private:
    Ui::MainWindow *ui;
    void createScene();
    MyGraphicsScene *scene = nullptr;
};

#endif // MAINWINDOW_H
