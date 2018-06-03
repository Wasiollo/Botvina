#ifndef LINEFIGURE_HPP
#define LINEFIGURE_HPP
#include "figure.hpp"
#include <QPainter>

class LineFigure : public Figure {
private:
    int origin_x;
    int origin_y;
    int end_x;
    int end_y;
    Qt::GlobalColor color;
public:
    LineFigure(int o_x,int o_y , int e_x, int e_y, Qt::GlobalColor c);
    void draw(QPainter& painter) override;
};

#endif // LINEFIGURE_HPP
