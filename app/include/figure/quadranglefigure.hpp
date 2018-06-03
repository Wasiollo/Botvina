#ifndef QUADRANGLEFIGURE_HPP
#define QUADRANGLEFIGURE_HPP
#include "figure.hpp"
#include <QPainter>

class QuadrangleFigure : public Figure {
private:
    int origin_x;
    int origin_y;
    int size;
    Qt::GlobalColor color;
public:
    QuadrangleFigure(int x,int y ,int s, Qt::GlobalColor c);
    void draw(QPainter& painter) override;
};
#endif // QUADRANGLEFIGURE_HPP
