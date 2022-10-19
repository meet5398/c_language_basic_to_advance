//c rpogram to check largest of four number
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter any four integer\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if (a>b)
    {
     if (a>c)
     {
         if (a>d)
         {
             printf("a is greatest number\n");

         }
         else
         {
             printf("d is greatest number\n");
         }
     }
    }
    else if (b>c)
     {
         if (b>d)
         {
             printf("b is greatest number\n");
            
         }
         else
         {
             printf("d is largest number\n");
         }     
     }
     else if (c>d)
     {
         printf("c is largest number\n");   
     }
    
    return 0;
}