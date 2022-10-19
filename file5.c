#include<stdio.h>
int main()
{
    FILE *b;
    b=fopen("ronak.txt","r");
   char c=fgetc(b);
   printf("the value of character is %s\n",c);
    fclose(b);
    return 0;
}