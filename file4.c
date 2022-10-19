#include<stdio.h>
int main()
{
    FILE *b;
    int a=23;
    b=fopen("ronak.txt","w");
    fprintf(b,"number is %d\n",a);
    fprintf(b,"thanks for using visual studio code\n");
    fclose(b);
    return 0;
}