#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    this->statusBar()->setSizeGripEnabled(false);
    show();
    ui->graphicsView->setAlignment(Qt::AlignTop | Qt::AlignLeft);
    createScene();

    // Initialize Foreground and Background-Color to Black & White
    QPixmap px(20, 20);
    px.fill(scene->tm->getColor(0));
    ui->tbtnForegroundColor->setIcon(px);
    px.fill(scene->tm->getColor(1));
    ui->tbtnBackgroundColor->setIcon(px);

    // Initialize ToolButtons
    ui->tbtnLine->setIconSize(toolIconSize);
    ui->tbtnStamp->setIconSize(toolIconSize);
    ui->tbtnBrush->setIconSize(toolIconSize);
    ui->tbtnFill->setIconSize(toolIconSize);
    ui->tbtnText->setIconSize(toolIconSize);
    ui->tbtnSpray->setIconSize(toolIconSize);
    ui->tbtnRect->setIconSize(toolIconSize);
    ui->tbtnEllipse->setIconSize(toolIconSize);
    ui->tbtnEraser->setIconSize(toolIconSize);
}

void MainWindow::createScene() {
    scene = new MyGraphicsScene(this, ui->graphicsView);
    ui->graphicsView->setScene(scene);
}

void MainWindow::deselectPrevious() {
    if (selectedTool == "none") {

    }
    else if (selectedTool == "line") {
        QPixmap pixmap(":/icons/icons/line.png");
        QIcon ButtonIcon(pixmap);
        ui->tbtnLine->setIcon(ButtonIcon);
        //ui->tbtnLine->setIconSize(pixmap.rect().size());
        ui->tbtnLine->setIconSize(toolIconSize);
    }
    else if (selectedTool == "stamp") {
        QPixmap pixmap(":/icons/icons/stamp.png");
        QIcon ButtonIcon(pixmap);
        ui->tbtnStamp->setIcon(ButtonIcon);
        //ui->tbtnStamp->setIconSize(pixmap.rect().size());
        ui->tbtnStamp->setIconSize(toolIconSize);
    }
    else if (selectedTool == "brush") {
        QPixmap pixmap(":/icons/icons/brush.png");
        QIcon ButtonIcon(pixmap);
        ui->tbtnBrush->setIcon(ButtonIcon);
        //ui->tbtnBrush->setIconSize(pixmap.rect().size());
        ui->tbtnBrush->setIconSize(toolIconSize);
    }
    else if (selectedTool == "fill") {
        QPixmap pixmap(":/icons/icons/fill.png");
        QIcon ButtonIcon(pixmap);
        ui->tbtnFill->setIcon(ButtonIcon);
        //ui->tbtnFill->setIconSize(pixmap.rect().size());
        ui->tbtnFill->setIconSize(toolIconSize);
    }
    else if (selectedTool == "text") {
        QPixmap pixmap(":/icons/icons/text.png");
        QIcon ButtonIcon(pixmap);
        ui->tbtnText->setIcon(ButtonIcon);
        //ui->tbtnText->setIconSize(pixmap.rect().size());
        ui->tbtnText->setIconSize(toolIconSize);
    }
    else if (selectedTool == "spray") {
        QPixmap pixmap(":/icons/icons/spray.png");
        QIcon ButtonIcon(pixmap);
        ui->tbtnSpray->setIcon(ButtonIcon);
        //ui->tbtnSpray->setIconSize(pixmap.rect().size());
        ui->tbtnSpray->setIconSize(toolIconSize);
    }
    else if (selectedTool == "rect") {
        QPixmap pixmap(":/icons/icons/rect.png");
        QIcon ButtonIcon(pixmap);
        ui->tbtnRect->setIcon(ButtonIcon);
        //ui->tbtnSpray->setIconSize(pixmap.rect().size());
        ui->tbtnRect->setIconSize(toolIconSize);
    }
    else if (selectedTool == "ellipse") {
        QPixmap pixmap(":/icons/icons/ellipse.png");
        QIcon ButtonIcon(pixmap);
        ui->tbtnEllipse->setIcon(ButtonIcon);
        //ui->tbtnSpray->setIconSize(pixmap.rect().size());
        ui->tbtnEllipse->setIconSize(toolIconSize);
    }
    else if (selectedTool == "eraser") {
        QPixmap pixmap(":/icons/icons/eraser.png");
        QIcon ButtonIcon(pixmap);
        ui->tbtnEraser->setIcon(ButtonIcon);
        //ui->tbtnSpray->setIconSize(pixmap.rect().size());
        ui->tbtnEraser->setIconSize(toolIconSize);
    }
    else if (selectedTool == "undo") {
        QPixmap pixmap(":/icons/icons/undo.png");
        QIcon ButtonIcon(pixmap);
        ui->tbtnUndo->setIcon(ButtonIcon);
        //ui->tbtnSpray->setIconSize(pixmap.rect().size());
        ui->tbtnUndo->setIconSize(toolIconSize);
    }
    else if (selectedTool == "freeze") {
        QPixmap pixmap(":/icons/icons/freeze.png");
        QIcon ButtonIcon(pixmap);
        ui->tbtnFreeze->setIcon(ButtonIcon);
        //ui->tbtnSpray->setIconSize(pixmap.rect().size());
        ui->tbtnFreeze->setIconSize(toolIconSize);
    }
}

void MainWindow::select(QObject *tbtn, QString resource) {
    QPixmap pixmap(resource);
    QIcon ButtonIcon(pixmap);
    //QMessageBox::information(this,"Information",tbtn->objectName(),QMessageBox::Ok);
    QToolButton *button = qobject_cast<QToolButton *>(tbtn);
    button->setIcon(ButtonIcon);
    //button->setIconSize(pixmap.rect().size());
    button->setIconSize(toolIconSize);
}

MainWindow::~MainWindow() {
    delete ui;
}



void MainWindow::on_action_ffnen_triggered()

    {
        QString imagePath = QFileDialog::getOpenFileName(this,tr("Open File"), "",tr("JPEG (*.jpg *.jpeg);;PNG (*.png)" ));

        imageObject = new QImage();
        imageObject->load(imagePath);
        image = QPixmap::fromImage(*imageObject);


        //scene = new QGraphicsScene(this);
        scene->addPixmap(image);
        scene->setSceneRect(image.rect());
        ui->graphicsView->setScene(scene);
}
