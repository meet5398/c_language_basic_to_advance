#include<stdio.h>
int main()
{
    int i,n,count;
    printf("prime number between 1to 100 are\n");
    for ( n = 2; n <=100; n++)
    {  count=0;
       for ( i = 2; i <=n/2; i++)
       {
           if (n%i==0)
           {
               count++;
               break;
           }
    
       }
       if (count==0)
       {
           printf("%d\n",n);
       }      
    }
    return 0;
}