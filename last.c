//program to find last digigt of number
#include<stdio.h>
int main()
    {
      int num,r;
      printf("enter the number you want to fimd last digit\n");
      scanf("%d",&num);
      r=num%10;
      printf("last digit is %d",r);
      return 0;
    }
