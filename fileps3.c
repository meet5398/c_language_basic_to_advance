//copying content of one file to another file
#include<stdio.h>
int main()
{
    FILE *ptr1;
    FILE *ptr2;
    char c;
    ptr1=fopen("m.txt","r");
    ptr2=fopen("g.txt","w");
    c= fgetc(ptr1);
    while (c!=EOF)
    {  
         fputc(c,ptr2);
         fputc(c,ptr2);
         c=fgetc(ptr1);

    }
    fclose(ptr1);
    fclose(ptr2);
    return 0;
    
}