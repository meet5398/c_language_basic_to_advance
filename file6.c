#include<stdio.h>
int main()
{
    FILE *b;
    b=fopen("r.txt","w");
    putc('a',b);
    fclose(b);
    return 0;
}