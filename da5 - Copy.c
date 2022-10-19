//use of free function  to free the space after use
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    float *b;
    float*c;
    printf("how many element you want to print\n");
    scanf("%d",&a);
    b=(float*) calloc(a,sizeof(float));
    for (int i = 0; i < a; i++)
    {
        c=(float*) calloc(60000,sizeof(float));
        printf("enter the value of %d element\n",i+1);
        scanf("%f",&b[i]);
        free(c);
        free(b);
    }
    for (int i = 0; i < a; i++)
    {
        printf(" the value of %d element is %f\n",i+1,b[i]);
    }
    return 0;
}