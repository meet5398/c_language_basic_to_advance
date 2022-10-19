#include<stdio.h>
#include<stdlib.h>
int main()
{
float *ptr;
ptr=(float*)malloc(12 *sizeof(int));
for (int i = 0; i <6; i++)
{
    printf("enter the value of %d element\n",i+1);
    scanf("%f",&ptr[i]);
}
for (int i = 0; i <6; i++)
{
    printf("the value of %d element is %f\n",i+1,ptr[i]);
}

return 0;
}