//program tofind  strong number
#include<stdio.h>
int main()
{
    int n,a[30],i,r,temp,fact,sum=0;
    printf("enter the number you want to find strong number\n");
    scanf("%d",&n);
    temp=n;
    for ( i = 1; temp>0;temp=temp/10)
    {
       r=temp%10;
       fact=1;
       for ( i =r; i>0; i--)
       { 
          // fact=1;
           fact=fact*i;
        
       }
       //printf("factorial is %d",fact);
       sum=sum+fact;
    }

   if (sum==n)
   {
       printf("it is strong number\n");
   }
   else
   {
       printf("it is not strong number\n");
   }
   
 return 0;   
}