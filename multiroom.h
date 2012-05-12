#ifndef MULTIROOM_H
#define MULTIROOM_H

#include "room.h"

class MultiRoom : public Room
{
public:
    MultiRoom(const Room &original);

    RoomType roomType() const;
    double ProductionAmount() const;
};

#endif // MULTIROOM_H
