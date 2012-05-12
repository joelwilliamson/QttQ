#include "room.h"
#include "scene.h"

#include <unistd.h>

#include <stdio.h>

Room::Room(int x, int y, Scene *scene, QObject *parent) :
    QObject(parent)
{
    myScene = scene;
    myParent=parent;
    grid_x = x;
    grid_y = y;
    desiredWorkers = 0;
    currentWorkers = 0;
    rect = scene->addRoom(none,grid_x,grid_y);
}

Room::Room(const Room &other) : QObject(other.myParent)
{
    printf("Entering copy constructor...\n");fflush(stdout);
    myParent=other.myParent;
    grid_x=other.grid_x;
    grid_y=other.grid_y;
    desiredWorkers=other.desiredWorkers;
    currentWorkers=other.currentWorkers;
    rect = other.myScene->addRoom(none,grid_x,grid_y);
    printf("Copy constructed. Returning...\n");fflush(stdout);
}

int Room::x() const
{
    return grid_x;
}

int Room::y() const
{
    return grid_y;
}

RoomType Room::roomType() const
{
    return none;
}

double Room::ProductionAmount() const
{
    return 0;
}

QGraphicsRectItem * Room::getRect() const
{
    printf("Returning rect at %i...\n",rect);fflush(stdout);
    return rect;
}
