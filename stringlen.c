#include<stdio.h>
#include<string.h>
int main()
{
    char m[45];
    int a;
    printf("enter your name\n");
    gets(m);
    puts(m);
    a=strlen(m);
    printf("length of the string is %d\n",a);
    return 0;
}