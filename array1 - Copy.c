#include<stdio.h>
int main()
{
    int i,marks[5];
    for ( i = 0; i<5; i++)
    {  printf("enter the marks of student%d:",i+1);
       scanf("%d",&marks[i]);
    }
    for ( i = 0; i<5; i++)
    {  
        printf("marks of student  %d :is %d\n ",i+1,marks[i]);
    }
   return 0; 
}
