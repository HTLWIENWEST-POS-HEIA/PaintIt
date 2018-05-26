#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QColor>
#include <QColorDialog>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QColor foregroundColor;
    QColor backgroundColor;

private slots:
    void on_action_Beenden_triggered();

    void on_tbtnForegroundColor_clicked();

    void on_tbtnBackgroundColor_clicked();

    void on_tbtnStamp_clicked();

    void on_tbtnBrush_clicked();

    void on_tbtnLine_clicked();

    void on_tbtnFill_clicked();

    void on_tbtnText_clicked();

    void on_tbtnSpray_clicked();

    void on_tbtnSwapColors_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
