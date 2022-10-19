//program to check it is  leap year or not
#include<stdio.h>
int main()
{
    int year;
    printf("enter the year you want to check\n");
    scanf("%d",&year);
    if (year % 4==0)
    {
        printf("it is leap year\n");
    }
    else
    {
         printf("it is not leap year \n");
    }
    
   
    

}