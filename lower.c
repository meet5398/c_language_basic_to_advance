//program to check lower case
#include<stdio.h>
int main()
{   char ch;
    printf("enter any character\n");
    scanf("%c",&ch);
    if (ch>=97 && ch<=122)
    {
        printf("%c is in lower case\n",ch);
    }
    else
    {
        printf("it is in upper case");
    }
    return 0;

}