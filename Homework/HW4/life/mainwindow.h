/**
Abby Nay & Oceane Andreis
Homework 4
Date: November 3 2019
This is our mainwindow.h where we have our methods, variables
and public slots.

*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "game.h"
#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <vector>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void TurnCounter();
    void NeighborsCount(); //to also output when we left click
    void DeadOrAlive();
private slots:

    void on_resetButton_clicked();

    void on_startButton_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *BuildGrid_;
    QGraphicsScene *BuildGraph_;
    int cell_height_;
    int cell_width_;
    int bar_height_;
    int bar_width_;
    int turn_ = 0;
    double speed_ = 1.0;
    QTimer *timer;
    Cell * cells[10][20];
    std::vector <Bar*> bars_;

};
#endif // MAINWINDOW_H
