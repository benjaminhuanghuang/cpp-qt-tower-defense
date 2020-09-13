#include <QGraphicsScene>
#include <QVector>

#include "tower.h"

Tower::Tower(QGraphicsItem *parent) : QGraphicsPixmapItem(parent)
{
  // draw graphics
  setPixmap(QPixmap(":/images/tower.png"));

  //  create points
  QVector<QPointF> points;
  points << QPoint(1, 0) << QPoint(2, 0) << QPoint(3, 1) << QPoint(3, 2)
         << QPoint(2, 3) << QPoint(1, 3) << QPoint(0, 2) << QPoint(0, 1);

  // scale points
  int SCALE_FACTOR = 80;
  for (size_t i = 0, n = points.size(); i < n; i++)
  {
    points[i] *= SCALE_FACTOR;
  }

  // Create poly
  QPolygonF polygon(points);

  // Create the QGraphicsPolygonItem
  attack_area = new QGraphicsPolygonItem(polygon, this);
  // move the polygon
  QPointF poly_center(1.5, 1.5);
  poly_center *= SCALE_FACTOR;
  poly_center = mapToScene(poly_center);
  QPointF tower_center(x() + 75, y() + 75);
  QLineF ln(poly_center, tower_center);
  attack_area->setPos(x() + ln.dx(), y() + ln.dy());
}
