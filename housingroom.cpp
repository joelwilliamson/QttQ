#include "housingroom.h"

HousingRoom::HousingRoom(const Room &original) : Room(original)
{
}


RoomType HousingRoom::roomType() const
{
    return housing;
}

double HousingRoom::ProductionAmount() const
{
    return 0;
}
