#include<stdio.h>
int main()
{
    int i,j,n,temp,a[10];
    printf("enter number you want to convert to octal\n");
    scanf("%d",&n);
    temp=n;
    for ( i = 0; temp>0; i++)
    {
        a[i]=temp % 8;
        temp=temp/8;
    }
    printf("\noctal number of %d is :==",n);
        for ( j = i-1; j >=0; j--)
    {
        printf("%d",a[j]);
    }
    printf("\n");
    return 0;

}