#ifndef FIGURE_HPP
#define FIGURE_HPP
#include <QPainter>
class Figure {
public:
    virtual void draw(QPainter& painter) = 0;
};


#endif // FIGURE_HPP
