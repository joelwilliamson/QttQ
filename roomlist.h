#ifndef ROOMLIST_H
#define ROOMLIST_H

#include <QList>
#include "room.h"

class RoomList : public QList<Room* >
{
public:
    RoomList();

public slots:
    void setRoomType(int index, RoomType roomType);
};

#endif // ROOMLIST_H
