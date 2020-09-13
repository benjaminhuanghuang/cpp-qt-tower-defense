#include <QGraphicsScene>

#include "tower.h"

Tower::Tower(QGraphicsItem *parent) : QGraphicsPixmapItem(parent)
{
  // draw graphics
  setPixmap(QPixmap(":/images/tower.png"));
  // 
}
