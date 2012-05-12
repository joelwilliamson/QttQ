#ifndef ROOM_H
#define ROOM_H

#include <QObject>

class Scene;
class QGraphicsRectItem;
class Scene;

enum RoomType {none, ag, ind, housing, multi};

class Room : public QObject
{
    Q_OBJECT

    int desiredWorkers; //The number of workers the room will try to achieve
    int currentWorkers;

    int grid_x, grid_y; //Where in the room grid the room lies

    QGraphicsRectItem *rect;
    Scene *myScene;

    QObject *myParent;

public:
    explicit Room(int x, int y, Scene *scene, QObject *parent = 0);
    Room(const Room& other);

    int x() const;
    int y() const;

    QGraphicsRectItem * getRect() const;

    virtual RoomType roomType() const;
    virtual double ProductionAmount() const;

signals:

public slots:

};





#endif // ROOM_H
