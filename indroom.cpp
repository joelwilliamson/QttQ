#include "indroom.h"

IndRoom::IndRoom(const Room &original) : Room(original)
{
}


RoomType IndRoom::roomType() const
{
    return ind;
}

double IndRoom::ProductionAmount() const
{
    return 0;
}
