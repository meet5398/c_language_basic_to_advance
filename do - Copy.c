#include<stdio.h>
int main()
{
    int i=0,n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    do
    {
        printf("the value of i is %d ",i+1);
        i++;
    } while (i<n);
    
}