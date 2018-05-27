#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    show();
    ui->graphicsView->setAlignment(Qt::AlignTop | Qt::AlignLeft);
    createScene();

    QPixmap px(20, 20);
    px.fill(scene->tm->getColor(0));
    ui->tbtnForegroundColor->setIcon(px);
    px.fill(scene->tm->getColor(1));
    ui->tbtnBackgroundColor->setIcon(px);
}

void MainWindow::createScene() {
    scene = new MyGraphicsScene(this, ui->graphicsView);
    ui->graphicsView->setScene(scene);
}

MainWindow::~MainWindow() {
    delete ui;
}
