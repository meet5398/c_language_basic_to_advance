//if value return 0 then match foun  no
#include<stdio.h>
#include<string.h>
int main()
{
    char *m;// char m[34];also accpted
    char  a[23];
    int val;
    printf("enter y  our first name\n");
    gets(m);
    printf("enter your last name\n");
    gets(a);
    val=strcmp(m,a);
    printf("now the value is %d\n",val);
    return 0;
}