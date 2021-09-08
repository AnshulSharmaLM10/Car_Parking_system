#include<stdio.h>
#include<conio.h>
#include<string.h>
#include "park.h"

void login()
{
   char password[55];
   printf("\n\n\n\n\n\n\n\t\t\t\t\tCar Parking Reservation System Login");
   printf("\n\n\n\n\n\n\n\t\t\t\t\t\tEnter Password: ");
   int p=0;
    do{
        password[p]=getch();
        if(password[p]!='\r'){
            printf("*");
        }
        p++;
    }while(password[p-1]!='\r');
    password[p-1]='\0';
    if(password=="pass")
      return; 
    else
    {
      printf("\nWrong Password, Try again");
      login();
    }
}
