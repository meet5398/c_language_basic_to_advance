#include<stdio.h>
int main()
{
    int i,mul[10];
    for ( i = 0; i <10; i++)
    {
        mul[i]=5*(i+1);
    }
    for ( i = 10; i >0; i--)
    {
        printf("5 * %d =%d\n",i,mul[i-1]);
    }
    
    
}