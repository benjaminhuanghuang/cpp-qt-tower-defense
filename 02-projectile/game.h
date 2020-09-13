#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QWidget>
#include <QMouseEvent>

#include "tower.h"

class Game : public QGraphicsView
{
    Q_OBJECT
public:
    // constructors
    Game();
    void mousePressEvent(QMouseEvent *event);

    // public attributes
    QGraphicsScene *scene;
    Tower *tower;
};

#endif