#include "figure/circlefigure.hpp"
#include <iostream>


CircleFigure::CircleFigure(int x, int y, int s, Qt::GlobalColor c): origin_x(x), origin_y(y), size(s), color(c){
}

void CircleFigure::draw(QPainter& painter){
    painter.save();
    painter.setBrush(QBrush(color));
    painter.drawEllipse(origin_x, origin_y, size, size);
    painter.restore();
}
