#include<stdio.h>
int main()
{
    int a[10]={12,32,23,43,65,22,11,78,65,99};
   int *b =&a[0];
   // int *b=a;
    printf("the value of 1st element is %d\n",*b);
    *b=*(b+2);
    printf("the value of next element is %d\n",*b);
    return 0;
}