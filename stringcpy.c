#include<stdio.h>
#include<string.h>
int main()
{
    char *m;// char m[34];also accpted
    char  a[23];
    printf("enter your name\n");
    gets(m);
    puts(m);
    strcpy(a,m);
    printf("now string a is %s\n",a);
    return 0;
}