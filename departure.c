#include<stdio.h>
#include<string.h>
#include "park.h"

void departure(struct customer *cars,int x,int n)
{
    int i=0,flag=0;
    for(i=0;i<n;i++)
    {
        if(flag==1)
        {
            cars[i-1]=cars[i];
        }
        if(cars[i].cno==x)
        {
            flag=1;
        }
    }
}

