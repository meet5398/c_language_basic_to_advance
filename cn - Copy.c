#include<stdio.h>
#include<stdlib.h>
int main()
{
    int l=0,n;
    float *ptr;
    float *b;
ptr=(float*)malloc(12 *sizeof(int));
b=(float*)malloc(12 *sizeof(int));
    printf("enter how many digit you want to enter");
    scanf("%d",&n);
    printf("enter any binary number during original size");
    for (int  i = 0; i < n; i++)
    {
       scanf("%d",&ptr[i]);
    }
    printf("enter during receiver side");
    for (int i = 0; i < n; i++)
    {
     scanf("%d",&b[i]);
    }
    for (int i = 0; i < n; i++)
    {
       if ( ptr[i]!= b[i])
       {
           l++;
       }   
    }
    printf("total error is %d:",l);
    
}
