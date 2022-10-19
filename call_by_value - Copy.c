#include<stdio.h>
int sum(int a ,int b);
int main()
{
    int a=10,b=20;
    printf("sum of a and b is %d\n",sum(a,b));
    return 0;
}
int sum(int a,int b)
{
    return a+b;
}