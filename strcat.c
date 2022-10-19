#include<stdio.h>
#include<string.h>
int main()
{
    char *m;// char m[34];also accpted
    char  a[23];
    printf("enter your first name\n");
    gets(m);
    printf("enter your last name\n");
    gets(a);
    strcat(m,a);
    printf("now string m is %s\n",m);
    return 0;
}