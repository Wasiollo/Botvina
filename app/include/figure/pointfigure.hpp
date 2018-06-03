#ifndef POINTFIGURE_HPP
#define POINTFIGURE_HPP

#include "figure.hpp"
#include <QPainter>

class PointFigure : public Figure {
private:
    int origin_x;
    int origin_y;
    Qt::GlobalColor color;
public:
    PointFigure(int x,int y ,Qt::GlobalColor c);
    void draw(QPainter& painter) override;
};

#endif // POINTFIGURE_HPP
