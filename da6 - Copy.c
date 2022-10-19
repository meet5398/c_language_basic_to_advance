//program to reallocate the size using realloc function
#include<stdio.h>
#include<stdlib.h>
int main()
{
float *ptr;
int n;
printf("enter the size\n");
scanf("%d",&n);
ptr=(float*)malloc(n *sizeof(float));
for (int i = 0; i <n; i++)
{
    printf("enter the value of %d element\n",i+1);
    scanf("%f",&ptr[i]);
}
for (int i = 0; i <n; i++)
{
    printf("the value of %d element is %f\n",i+1,ptr[i]);
}
//reallocating the memory
int m;
printf("enter the size of the array you want to reallocate\n");
scanf("%d",&m);
ptr=(float*)realloc(ptr,m*sizeof(float));
for (int i = 0; i <m; i++)
{
    printf("enter the value of %d element\n",i+1);
    scanf("%f",&ptr[i]);
}
for (int i = 0; i <m ;i++)
{
    printf("the value of %d element is %f\n",i+1,ptr[i]);
}
return 0;
}