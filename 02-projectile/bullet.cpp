#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QList>
#include <qmath.h>


#include "bullet.h"
#include "game.h"

extern Game *game;

Bullet::Bullet(QGraphicsItem *parent) : QObject(), QGraphicsPixmapItem(parent)
{
  // draw graphics
  setPixmap(QPixmap(":/images/bullet.png"));

  // connect
  QTimer *timer = new QTimer();

  connect(timer, SIGNAL(timeout()), this, SLOT(move()));

  // start timer
  timer->start(50);
}

void Bullet::move()
{
  int STEP_SIZE = 30;
  float theta = rotation();   //degrees

  double dy = STEP_SIZE * qSin(qDegreesToRadians(theta));
  double dx = STEP_SIZE * qCos(qDegreesToRadians(theta));

  setPos(x()+dx , y()+dy);
}