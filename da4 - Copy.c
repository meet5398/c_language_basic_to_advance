//use of calloc (upon user required)
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    float *b;
    printf("how many element you want to print\n");
    scanf("%d",&a);
    b=(float*) calloc(a,sizeof(float));
    for (int i = 0; i < a; i++)
    {
        printf("enter the value of %d element\n",i+1);
        scanf("%f",&b[i]);
    }
    for (int i = 0; i < a; i++)
    {
        printf(" the value of %d element is %f\n",i+1,b[i]);
    }
    return 0;
}