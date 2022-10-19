//*ptr can be reinitialised  
//but if ptr[]="string" can not be reinitialised
#include<stdio.h>
int main()
{
    char m[45];
    printf("enter your name\n");
    gets(m);
    puts(m);
    printf("name is %s",m);
    return 0;
}