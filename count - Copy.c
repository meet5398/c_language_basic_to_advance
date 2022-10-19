//COUNT NO OF DIGIT IN NUMBER
#include<stdio.h>
int main()
{
    int number,count=0;
    printf("enter the number you want to count digit\n");
    scanf("%d,",&number);
    while (number!=0)
    {
        count=count+1;
        number=number/10;
    }
    printf("total digit are %d",count);
    return 0;
    }