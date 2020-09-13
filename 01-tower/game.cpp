#include <QGraphicsTextItem>
#include <QGraphicsScene>
#include <QFont>
#include <QTimer>
#include <QMediaPlayer>
#include <QBrush>
#include <QImage>

#include "game.h"
#include "tower.h"

Game::Game()
{
  // Crete scene
  scene = new QGraphicsScene(this);
  // make the scene visible by set it to QGraphicsView
  setScene(scene);
  

  // Create the tower
  tower = new Tower(); 
  scene->addItem(tower);

  // Resize window
  setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
  setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
  setFixedSize(800, 600);
}