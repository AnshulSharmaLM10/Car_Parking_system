#include<stdio.h>
#include<string.h>
#include "park.h"

void output(customer x)
{
	print("\n");
    printf("\n\t\tOwner Name: %s",x.name);
    printf("\n\t\tCar Number: %d",x.cno);
    printf("\n\t\tEntry Time: %s",x.entryTime);
    printf("\n\t\tDuration of car parked: %d",x.duration);
    print("\n");
}

