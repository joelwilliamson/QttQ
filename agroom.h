#ifndef AGROOM_H
#define AGROOM_H

#include "room.h"

class AgRoom : public Room
{
public:
    AgRoom(const Room &original);

    RoomType roomType() const;
    double ProductionAmount() const;
};

#endif // AGROOM_H
