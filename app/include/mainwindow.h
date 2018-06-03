#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>
#include <QKeyEvent>
#include <QPaintEvent>
#include "evaluator/evaluator.hpp"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    void keyPressEvent(QKeyEvent *key_event);
    Evaluator eval;


};

#endif // MAINWINDOW_H
