#include<stdio.h>
#include<conio.h>
#include<string.h>

void carsinParking(customer cars[20],int n)
{
   int i=0;
   if(n==0)
   printf("\t\tEmpty");
   else
   printf("\n\t\tTotal Number of cars parked: %d",n);
   for(i=0;i<n;i++)
      output(cars[i]);
}

