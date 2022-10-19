#include<stdio.h>
int main()
{   FILE *ptr;
    ptr= fopen("ps4.txt","w");
    int a,b;
    char c[12],d[23];
    printf("enter your name\n");
    gets(c);
    printf("enter your salary\n");
    scanf("%d",&a);
    fflush(stdin);
     printf("enter your name\n");
    gets(d);
    printf("enter your salary\n");
    scanf("%d",&b);
     fprintf(ptr,"  %s_",c);
    fprintf(ptr,"%d\n",a);
    fprintf(ptr,"   %s_",d);
    fprintf(ptr,"%d\n",b);
    return 0;
}