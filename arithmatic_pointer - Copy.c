#include<stdio.h>
int main()
{
    int   a=10;
    int   *b=&a;
    char  c=23;
    char  *d=&c;
    printf("value od b is %u\n",b);
    b++;
    printf("the value of b is %u\n",b);
    printf("value  of d is %u\n",d);
    d++;
    printf("value of d is %d\n",d);
    printf("the address of d is %u\n",&d);
    return 0;
}
