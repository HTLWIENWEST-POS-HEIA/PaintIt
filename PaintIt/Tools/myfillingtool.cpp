#include "myfillingtool.h"

MyFillingTool::MyFillingTool(QPixmap myPixmap) {
    myImage = myPixmap.toImage();
}

QGraphicsItem* MyFillingTool::mousePressed(QGraphicsSceneMouseEvent *event, QPen myPrimaryPen, QPen mySecondaryPen) {
    if(event->button() == Qt::LeftButton) {
        fill(event->lastScenePos().x(), event->lastScenePos().y(), myPrimaryPen.color());
        return (QGraphicsItem*)myPixmapItem;
    }
    (void)myPrimaryPen;
    (void)mySecondaryPen;
    return nullptr;
}

void MyFillingTool::mouseMoved(QGraphicsSceneMouseEvent *event) {
    (void)event;
}

void MyFillingTool::fill(int x, int y, QColor fillingColor) {
    struct coordinate { int x, y; };
    std::queue<coordinate> to_draw;
    to_draw.push({x, y});
    int width = myImage.width();
    int height = myImage.height();
    QColor replacingColor = myImage.pixelColor(x, y);

    while(!to_draw.empty()) {
        auto top = to_draw.front();
        to_draw.pop();
        if((top.x >= 0 && top.x < width) && (top.y >= 0 && top.y < height) && (myImage.pixelColor(top.x, top.y) == replacingColor && myImage.pixelColor(top.x, top.y) != fillingColor)) {
            myImage.setPixelColor(top.x, top.y, QColor(fillingColor.rgb()));
            to_draw.push({top.x + 1, top.y});
            to_draw.push({top.x - 1, top.y});
            to_draw.push({top.x, top.y + 1});
            to_draw.push({top.x, top.y - 1});
        }
    }

    myPixmapItem = new QGraphicsPixmapItem(QPixmap::fromImage(myImage));
    myPixmapItem->setPos(-1, -1);
}
