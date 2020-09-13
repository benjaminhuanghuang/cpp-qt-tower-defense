#ifndef TOWER_H
#define TOWER_H

#include <QObject> // For using the signal slot
#include <QGraphicsPixmapItem>
#include <QGraphicsPolygonItem>
#include <QGraphicsItem>

class Tower : public QObject, public QGraphicsPixmapItem
{
  Q_OBJECT // For using the signal slot
      public : Tower(QGraphicsItem *parent = nullptr);

private:
  QGraphicsPolygonItem *attack_area;
};

#endif