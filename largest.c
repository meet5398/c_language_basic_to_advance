#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter any three number \n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("a is largest number%d\n",a);

        }
        else
        {
            printf("c is largest number%dn",c);
        }
        
    }
     else
     {
        if (b>c)
         printf("b is largest number%d\n",b);
         else
         printf("c is largest number%d\n",c);
     }
 return 0;
           
}