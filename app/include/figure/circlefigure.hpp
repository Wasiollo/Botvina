#ifndef CIRCLEFIGURE_H
#define CIRCLEFIGURE_H

#include "figure.hpp"
#include <QPainter>

class CircleFigure : public Figure {
private:
    int origin_x;
    int origin_y;
    int size;
    Qt::GlobalColor color;
public:
    CircleFigure(int x,int y ,int s, Qt::GlobalColor c);
    void draw(QPainter& painter) override;
};

#endif // CIRCLEFIGURE_H
