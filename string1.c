#include<stdio.h>
int main()
{
    char s[]="meet";
    char *temp=s;
    while (*temp!='\0')
    {
        printf("%c",*temp);
        temp++;
    }
 return 0;   
}