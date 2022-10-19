#include<stdio.h>
int main()
{
    FILE *b;
    b= fopen("meet12.txt","r");
    int c,d,e;
    fscanf(b,"%d",&c);
    fscanf(b,"%d",&d);
    fscanf(b,"%d",&e);
    printf("first number is %d\n",c);
    printf("second number is %d\n",d);
    printf("third number is %d\n",e);
    return 0;
}