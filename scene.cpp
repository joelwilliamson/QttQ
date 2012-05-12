#include "scene.h"
#include "room.h"
#include "stdio.h"

#include <QGraphicsItem>

Scene::Scene(QObject *parent) :
    QGraphicsScene(parent)
{
}

QGraphicsRectItem * Scene::addRoom(RoomType roomType, int x, int y)
{
    QColor roomColor;
    if (roomType == ag)
        roomColor.setRgb(0,100,0);
    else if (roomType == ind)
        roomColor.setRgb(255,100,0); //Industrial rooms are orange
    else if (roomType == housing)
        roomColor.setRgb(0,0,100); //Housing is blue
    else
        roomColor.setRgb(0,0,0);
    return addRect(x*200+10,y*200+10,180,180,QPen(roomColor));
}

QGraphicsRectItem * Scene::updateRoom(Room *room)
{

    QColor roomColor;
    if (room->roomType() == ag)
        roomColor.setRgb(0,100,0);
    else if (room->roomType() == ind)
        roomColor.setRgb(255,100,0); //Industrial rooms are orange
    else if (room->roomType() == housing)
        roomColor.setRgb(0,0,100); //Housing is blue
    else
        roomColor.setRgb(0,0,0);
    printf("roomColor decided. Setting pen...\n");fflush(stdout);

    QPen pen = QPen(roomColor);
    pen.setWidth(3);

    room->getRect()->setPen(pen);
    printf("Pen set. Returning rect...\n"); fflush(stdout);
    return room->getRect();
}
