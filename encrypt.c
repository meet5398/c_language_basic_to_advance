#include<stdio.h>
void encypted(char *c)
{
  char *ptr=c;
    while (*ptr!='\0')
    {
       *ptr= *ptr+2;
       ptr++;
    }
    
}
int main()
{
    char c[]="coming to college";
   // printf("enter the code you want to encrypt\n");
    //gets(c);
    encypted(c);
    printf("encrypted Code is %s",c);
}
