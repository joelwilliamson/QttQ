#ifndef HOUSINGROOM_H
#define HOUSINGROOM_H

#include "room.h"

class HousingRoom : public Room
{
public:
    HousingRoom(const Room &original);

    RoomType roomType() const;
    double ProductionAmount() const;
};

#endif // HOUSINGROOM_H
