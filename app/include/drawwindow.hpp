#ifndef DRAWWINDOW_HPP
#define DRAWWINDOW_HPP
#include <QWidget>
#include <QPainter>
#include <QGraphicsScene>
#include <QtDesigner/customwidget.h>
#include "figure/figure.hpp"
#include <memory>

class DrawWindow : public QWidget{
Q_OBJECT

public:
    explicit DrawWindow(QWidget *parent = Q_NULLPTR);
    ~DrawWindow();
    std::vector<std::unique_ptr<Figure>>& getDrawVector();

protected:
    void paintEvent(QPaintEvent *event);

private:
  std::vector<std::unique_ptr<Figure>> drawVector;

};

#endif // DRAWWINDOW_HPP
