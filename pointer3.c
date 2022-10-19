// pointer to pointer 
#include<stdio.h>
int main()
{
    int i=10;
    int *j;
    j=&i;   // if you are facing problem in underststanding concept then pls look at the concept of codewithherry
    int **k;
    k=&j;
    printf("the value of i is %d\n",i);
    printf("the value of j is %d\n",*j);
    printf("the value of k is %d\n",**k);
    return 0;
}