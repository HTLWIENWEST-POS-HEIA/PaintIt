#ifndef MYTOOLPROPERTIES_H
#define MYTOOLPROPERTIES_H

#include <QPen>

struct MyToolProperties{
    int myRadius = 20;
    QPen myPrimaryPen = QPen(Qt::black, 1, Qt::SolidLine, Qt::RoundCap);
    QPen mySecondaryPen = QPen(Qt::white, 1, Qt::SolidLine, Qt::RoundCap);
};

#endif // MYTOOLPROPERTIES_H
