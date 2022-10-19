//reversing a array using a function
#include<stdio.h>
void reverse(int *arr,int n);
int main()
{   int i;
   int arr[7]={1,2,3,4,5,6,7};
   reverse(arr,7);
   for ( i = 0; i < 7; i++)
   {
       printf("value of %d element is %d\n",i+1,arr[i]);
   }
   
}
void reverse(int *arr,int n)
{
    int temp,i;
    for ( i = 0; i <n/2; i++)
    {
        temp=arr[i];
   arr[i] =arr[n-i-1];
   arr[n-i-1]=temp;
    }
}
    
    
