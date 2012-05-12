#ifndef SCENE_H
#define SCENE_H

#include <QGraphicsScene>

#include "room.h"

class Scene : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit Scene(QObject *parent = 0);

signals:

public slots:
    QGraphicsRectItem * addRoom(RoomType roomType, int x, int y);
    QGraphicsRectItem * updateRoom(Room *room);

};

#endif // SCENE_H
