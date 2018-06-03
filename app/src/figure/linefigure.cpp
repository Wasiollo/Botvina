#include "figure/linefigure.hpp"
#include <iostream>

void LineFigure::draw(QPainter &painter){
    painter.save();
    QPen pen;
    pen.setColor(color);
    pen.setWidth(3);
    painter.setPen(pen);
    painter.drawLine(origin_x, origin_y, end_x, end_y);
    painter.restore();
}

LineFigure::LineFigure(int o_x, int o_y,int e_x, int e_y, Qt::GlobalColor c): origin_x(o_x), origin_y(o_y), end_x(e_x), end_y(e_y), color(c){
}
