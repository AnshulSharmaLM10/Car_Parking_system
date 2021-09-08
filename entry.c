#include<stdio.h>
#include<string.h>
#include "park.h"

\\Header file included

customer entry()
{
	customer x;
    printf("\n\t\tEnter your name: ");
    scanf("%s",&x.name);
    printf("\n\t\tEnter Vehical Number: ");
    scanf("%d",&x.cno);
    printf("\n\t\tEnter time duration for parking: ");
    scanf("%d",&x.duration);
    printf("\n\t\tEnter your entry time: ");
    scanf("%s",&x.entryTime);
    printf("\n\t\tAre you a VIP if yes press 1 othervise press 0: ");
    scanf("%d",&x.vip);
    return x;
}

