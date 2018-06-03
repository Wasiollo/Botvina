#include "drawwindow.hpp"
#include "QPainter"
#include <iostream>

DrawWindow::DrawWindow(QWidget *parent) : QWidget(parent){

}

DrawWindow::~DrawWindow(){}

void DrawWindow::paintEvent(QPaintEvent* event){
    QPainter painter(this);
    painter.setPen(Qt::NoPen);

    for(auto& figure : drawVector){
        figure->draw(painter);
    }
}

std::vector<std::unique_ptr<Figure>> &DrawWindow::getDrawVector(){
    return drawVector;
}
