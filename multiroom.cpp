#include "multiroom.h"

MultiRoom::MultiRoom(const Room &original) : Room(original)
{
}


RoomType MultiRoom::roomType() const
{
    return multi;
}

double MultiRoom::ProductionAmount() const
{
    return 0;
}
