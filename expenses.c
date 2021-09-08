#include<stdio.h>
#include<string.h>
#include "park.h"

int expenses(customer x)
{
    if(x.vip)
    return x.duration*10;
    else
    return x.duration*20;
}

