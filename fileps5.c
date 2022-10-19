#include<stdio.h>
int main()
{
    FILE *a;
    int b;
     a=fopen("meet52.txt","r");
     fscanf(a,"%d",&b);
     b=b*2;
     fclose(a);
     a=fopen("meet52.txt","w");
     fprintf(a,"%d\n",b);
     fclose(a);
     return 0;
}