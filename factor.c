//C program to find factor of number
#include <stdio.h>

int main()
{
    int Num1,i ;

    printf("Please integer Values \n");
    scanf(" %d", &Num1);
   printf("factor of %d is",Num1);
    for(i = 1; i <=Num1; i++)
    {
        if(Num1 % i == 0 ) 
       printf(" %d", i);
    }
    printf("%d",--i);
    return 0;
}