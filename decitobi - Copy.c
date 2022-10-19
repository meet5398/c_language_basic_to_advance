#include <stdio.h>
int main() 
{
    int a[10], number, i, j;
    printf("\n Please Enter the Number You want to Convert  :  ");
    scanf("%d", &number);
    
    for(i = 0; i <= number; i++)
    {
        a[i] = number % 2;
        number = number / 2;
    }
    
    printf("\n Binary Number of a Given Number =  ");
    for(j = i ; j >= 0; j--)  {
        printf(" %d ", a[j]);
    }
    printf("\n");
    return 0;
}