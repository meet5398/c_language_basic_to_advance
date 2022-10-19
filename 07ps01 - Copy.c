//compare array  using pointer
#include<stdio.h>
int main()
{
    int arr[10];
    int *ptr=&arr[0];
    ptr=ptr+2;
    if (ptr==&arr[2])
    {
        printf("match found");
    }
    else
    {
        printf("match not found");
    }
    return 0;
}