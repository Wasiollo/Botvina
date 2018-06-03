#include "figure/quadranglefigure.hpp"
#include <iostream>

void QuadrangleFigure::draw(QPainter &painter){
    painter.save();
    painter.setBrush(QBrush(color));
    painter.drawRect(origin_x, origin_y, size, size);
    painter.restore();
}

QuadrangleFigure::QuadrangleFigure(int x, int y, int s, Qt::GlobalColor c): origin_x(x), origin_y(y), size(s), color(c){
}


