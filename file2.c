#include<stdio.h>
int main()
{
    FILE *ptr;
    int a;
    int b;
    ptr=fopen("meet12.txt","r");
    fscanf(ptr,"%d",&a);
    fscanf(ptr,"%d",&b);
    fclose(ptr);
    printf("the value of a is %d\n",a);
    printf("the value of b is %d",b);
    return 0;
}