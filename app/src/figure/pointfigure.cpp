#include "figure/pointfigure.hpp"
#include <iostream>

void PointFigure::draw(QPainter &painter){
    painter.save();
    painter.setBrush(QBrush(color));
    painter.drawEllipse(origin_x, origin_y, 10, 10);
    painter.restore();
}

PointFigure::PointFigure(int x, int y, Qt::GlobalColor c): origin_x(x), origin_y(y), color(c){
}


