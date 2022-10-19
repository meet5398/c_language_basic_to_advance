//calloc function 
//in calloc function value of pointer is initialised to 0
// if not declared
//it is continuous //memory  allocation
#include<stdio.h>
#include<stdlib.h>
int main()
{
float *ptr;
ptr=(float*)malloc(12 *sizeof(int));
for (int i = 0; i <6; i++)
{  printf("enter the value of %d element\n",i+1);  
    scanf("%f",&ptr[i]);
}

// ptr=realloc(ptr,23);
//  for (int i = 0; i <23; i++)
// {  printf("enter the value of %d element\n",i+1);  
//     scanf("%f",&ptr[i]);
// 
return 0;
}