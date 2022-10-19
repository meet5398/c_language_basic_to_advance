//find gneric root
#include<stdio.h>
int main()
{
    int number,Generic=0,r,sum=0,j;
    printf("enter the number you want to find generic root\n");
    scanf("%d,",&number);
    while (number!=0)
    {   
        r=number%10;
        sum=sum+r;
        number=number/10;
    }
    printf("sum of digit are %d\n",sum);
    while (sum!=0)
    {
        j=sum%10;
        Generic=Generic+j;
        sum=sum/10;
    }
    printf("generic roots of number is %d\n",Generic);
    
    return 0;
    }