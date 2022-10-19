#include<stdio.h>
int main()
{
    int marks[5],i;
    int *a;
    a=&marks[0];
    for ( i = 0; i<5; i++)
    {
     printf("enter the marks of student %d\n",i+1);
     scanf("%d",a);
     a++;
    }
    for ( i = 0; i<5; i++)
    {
     printf("marks of student %d is %d\n",i+1,marks[i]);
     
    }
    return 0;   
}