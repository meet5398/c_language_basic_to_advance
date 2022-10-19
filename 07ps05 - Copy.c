#include<stdio.h>
void check(int *arr,int n);
int main()
{   int i;
   int arr[7]={1,2,3,-4,5,6,-7};
   check(arr,7);
  //printf("total positive integer is%d\n");
}
void check(int *arr,int n)
{
    int i,count=0;
    for ( i = 0; i <n; i++)
    {
       if (arr[i]>0)
       {
          count++;
       }
       
    }
   printf("total positive number is %d",count);
}
    
    
