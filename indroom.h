#ifndef INDROOM_H
#define INDROOM_H

#include "room.h"

class IndRoom : public Room
{
public:
    IndRoom(const Room &original);

    RoomType roomType() const;
    double ProductionAmount() const;
};

#endif // INDROOM_H
