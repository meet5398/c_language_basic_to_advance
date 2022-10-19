//C program to find HCF of two numbers
#include <stdio.h>

int main()
{
    int Num1, Num2,num3, i, GCD,lcd;

    printf("Please Enter two integer Values \n");
    scanf("%d %d %d", &Num1, &Num2,&num3);

    for(i = 1; i <= Num1 && i <= Num2 && i<=num3; i++)
    {
        if(Num1 % i == 0 && Num2 % i == 0)
            GCD = i;
    }

    printf("GCD of %d %d and %d is = %d\n", Num1, Num2,num3, GCD);
    lcd=Num1*Num2*num3/GCD;
    printf("lcd is %d",lcd);
    return 0;
}