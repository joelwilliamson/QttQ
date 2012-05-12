#include "agroom.h"
#include <stdio.h>

AgRoom::AgRoom(const Room &original) : Room(original)
{
    printf("AgRoom created.\n");fflush(stdout);
}


RoomType AgRoom::roomType() const
{
    return ag;
}

double AgRoom::ProductionAmount() const
{
    return 0;
}
