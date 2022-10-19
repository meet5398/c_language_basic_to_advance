//very imp to understand advance problem
#include<stdio.h>
#include<string.h>
int main()
{
    char m[34];
    char  a[23];
    char c;
    int i=0;
    printf("enter string in m \n");
    gets(m);
    printf("enter string 2 using character by character \n");
     while (c!='\n')
     {
        fflush(stdin);
        scanf("%c",&c);
        a[i]=c;
        i++;
     }
     a[i-1]='\0';
     printf("string m is %s\n",m);
     printf("string a is %s\n",a);
     printf("string camparision for this string returns %d\n",strcmp(m,a));
    return 0;
}