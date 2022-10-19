#include<stdio.h>
void swap(int *a,int *b);
int main()
{
    int a=10,b=20;
    printf("the value of a and b before swapping is %d%d\n",a,b);
    swap(&a,&b);
    printf("the value of a and b after swapping is%d %d",a,b);
    return 0;
}
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}