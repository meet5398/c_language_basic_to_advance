#include<stdio.h>
int main()
{
    int marks[5][3],i,j;
    int *c=&marks[0][0];
   int student=5;
    int subject=3;
    for ( i = 0; i <student; i++)
    {
       for ( j = 0; j < subject; j++)
       {  
           printf("enter the marks of student %d in subject %d\n",i+1,j+1);
           scanf("%d",c);
            c++;
       }
       
    }
    for ( i = 0; i <student; i++)
    {
       for ( j = 0; j < subject; j++)
       {
           printf(" the marks of student %d in subject %d is %d\n",i+1,j+1,marks[i][j]);
           //*c++;
           //printf(" %d ",marks[i][j]);
       }
       printf("\n");
    }
    return 0;
}