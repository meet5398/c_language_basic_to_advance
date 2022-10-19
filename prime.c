#include<stdio.h>
int main()
{
    int i,count,n;
    printf("enter tne number you want to check\n");
    scanf("%d",&n);
    count=0;
    for ( i = 2; i <n; i++)
    {    
       
        if (n%i==0)
        {
            count++;
            break;
    }
        }
        
    if (count==0)
    {
        printf("it is  prime number");
    }
    else
    {
        printf("it is mot prime number");
    }  
}