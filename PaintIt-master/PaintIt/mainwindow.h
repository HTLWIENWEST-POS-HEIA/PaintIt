#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QColor>
#include <QMainWindow>
#include <QMessageBox>
#include <QToolButton>
#include <QFontDialog>
#include <QColorDialog>
#include "mygraphicsscene.h"
#include <QFile>
#include <QFileDialog>
#include <QGraphicsView>
#include <QPixmap>
#include <QImage>
#include <QGraphicsScene>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_tbtnUndo_clicked();
    void on_tbtnLine_clicked();
    void on_tbtnFill_clicked();
    void on_tbtnText_clicked();
    void on_tbtnRect_clicked();
    void on_tbtnStamp_clicked();
    void on_tbtnBrush_clicked();
    void on_tbtnSpray_clicked();
    void on_tbtnEraser_clicked();
    void on_tbtnFreeze_clicked();
    void on_tbtnEllipse_clicked();
    void on_pb_fontDialog_clicked();
    void on_tbtnSwapColors_clicked();
    void on_action_Beenden_triggered();
    void on_tbtnForegroundColor_clicked();
    void on_tbtnBackgroundColor_clicked();
    void on_action_Speichern_unter_triggered();
    void on_spinBox_particleCount_valueChanged(int particleCount);
    void on_spinBox_LineWidth_valueChanged(int arg1);
    void on_action_ffnen_triggered();
    void on_spinBox_stampSize_valueChanged(int arg1);

private:
    Ui::MainWindow *ui;
    void createScene();
    void deselectPrevious();
    QString selectedTool = "none";
    MyGraphicsScene *scene = nullptr;
    QSize toolIconSize = QSize(20,20);
    void select(QObject *tbtn, QString resource);
    QImage  *imageObject;
    QPixmap image;
};

#endif // MAINWINDOW_H
