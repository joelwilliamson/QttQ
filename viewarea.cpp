#include "viewarea.h"
#include <QGraphicsScene>

ViewArea::ViewArea(QGraphicsScene *scene, QWidget *parent) :
    QGraphicsView(scene,parent)
{
}
