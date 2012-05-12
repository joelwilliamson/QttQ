#include "roomlist.h"
#include "agroom.h"
#include "indroom.h"
#include "housingroom.h"
#include "multiroom.h"

#include <stdio.h>

RoomList::RoomList():QList()
{
}


void RoomList::setRoomType(int index, RoomType roomType)
{
    printf("Determining type...\n");fflush(stdout);
    switch (roomType){
    case none:
        operator[](index) = new Room(*(at(index)));
    case ag:
        printf("Type: ag. Setting type...\n");fflush(stdout);
        operator[](index) = new AgRoom(*(at(index)));
        printf("Type set. Breaking...\n");fflush(stdout);
        break;
    case ind:
        operator[](index) = new IndRoom(*(at(index)));
        break;
    case housing:
        operator[](index) = new HousingRoom(*(at(index)));
        break;
    case multi:
        operator[](index) = new MultiRoom(*(at(index)));
        break;
    default:
        printf("No type found.\n");fflush(stdout);

    }
    printf("Room type set. Returning...\n");fflush(stdout);

}
