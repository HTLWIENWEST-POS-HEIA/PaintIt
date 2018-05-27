#ifndef MYGRAPHICSSCENE_H
#define MYGRAPHICSSCENE_H

#include <QMainWindow>
#include "toolmanager.h"
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>

class ToolBase;
class ToolManager;

class MyGraphicsScene : public QGraphicsScene{
public:
    ToolManager *tm;
    MyGraphicsScene(QMainWindow *parent, QGraphicsView *graphicsView);

protected:
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
};

#endif
