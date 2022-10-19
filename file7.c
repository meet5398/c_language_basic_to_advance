#include<stdio.h>
int main()
{
    FILE *b;
    char c;
    b=fopen("r.txt","r");
    c=fgetc(b);
    while (c!=EOF)
    {
        printf("%c",c);
        c=fgetc(b);
    }
    
    fclose(b);
    return 0;
}