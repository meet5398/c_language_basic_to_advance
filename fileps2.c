#include<stdio.h>
int main()
{
    FILE *b;
    b= fopen("mul.txt","w");
    int c,i;
    printf("enter number you want to make table\n");
    scanf("%d",&c);
    for ( i = 1; i <=10; i++)
    {
       fprintf(b,"%d * %d =%d\n",c,i,c*i);
       
    }
    fprintf(b,"***************\n");
    return 0;
}