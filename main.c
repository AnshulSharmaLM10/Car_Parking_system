#include<stdio.h>
#include<string.h>
#include "park.h"

#define parkingSlots 10

int main()
{
	int choice,n=0,i,cno1;
	customer cars[20];
	while(1){
	printf("\n\t\t 1. Arrival of a Car");
    printf("\n\t\t 2. Total no of cars Arrived");
    printf("\n\t\t 3. Parking payment");
    printf("\n\t\t 4. Departure of the car");
    printf("\n\t\t 5. Exit Program");
    printf("\n\t\t Choice: ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
		{
			if(parkingSlots==n)
			{
				printf("\n\t\tParking slots are full You Cannot park");
				break;
			}
			cars[n]=entry();
			printf("\n\n\t\t\t\tCAR PARKED");
			n++;
			break;
		}
		case 2:
		{
			printf("\n\n\n\t\t\t\t\t\t%d",n);
			carsinParking(cars,n);
			break;
		}
		case 3:
	    {
	    	printf("\n\t\t Enter the car number to view the amount to be paid: ");
	    	scanf("%d",&cno1);
	    	for(i=0;i<n;i++)
	    	{
	    		if(cars[i].cno==cno1)
	    		{
	    			printf("\n\t\tCost of car number %d for parking for %d hours is: %d",cars[i].cno,cars[i].duration,expenses(cars[i]));
	    			if(cars[i].paid==1)
	    			printf("Payment already done.");
	    			cars[i].paid=1;
			    }
		    }
			break;
		}
		case 4:
		{
	        printf("\n\t\tEnter the Car Number to be departed : ");
			scanf("%d",&cno1);
			for(i=0;i<n;i++)
			{
				if(cars[i].cno==cno1)
				{
					if(cars[i].paid==1)
					{
				        departure(cars,cno1,n);
					    n--;
					    printf("Car Departed");
				    }
				    else
				    printf("\n\t\tParking payment is not paid, Car cannot be departed until the payment is done");
				}
				else
				printf("\n\t\tCar not found");
			}
			break;			
		}
		case 5: return 0;
		        break;
		default: {
		   printf("\n\n\t\t Invalid input");
		   printf("\n\n\t\tPress Enter to continue");
		   break;
       	}
	}
	getch();
}
return 0;
}

