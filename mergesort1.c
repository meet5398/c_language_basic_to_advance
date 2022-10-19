#include<stdio.h>
int main(){
    int a[45];
    int b[34];
    printf("enter the size of the element");
    int n;
    scanf("%d",&n);
    printf("enter the array of the first row");
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the array of the 2 nd row");
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&b[i]);
    }
    
}