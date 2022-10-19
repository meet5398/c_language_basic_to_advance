#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr;
printf("size of int is %d\n",sizeof(int));
printf("size of char is %d\n",sizeof(char));
printf("size of float is %d\n",sizeof(float));
printf("size of double is %d\n",sizeof(double));
//ptr=(int *)malloc(12 *sizeof(int));
return 0;
}