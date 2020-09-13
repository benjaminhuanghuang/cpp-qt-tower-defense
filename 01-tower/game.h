#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QWidget>


#include "tower.h"


class Game : public QGraphicsView
{
    Q_OBJECT
public:
    // constructors
    Game();

    // public attributes
    QGraphicsScene *scene;
    Tower *tower;
};

#endif