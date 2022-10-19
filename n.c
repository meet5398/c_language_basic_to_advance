// program to print sum of n natural numbers
#include<stdio.h>
int sum(int a);
int main()
{
    int n;
    printf("how many number series you wnt to print\n");
    scanf("%d",&n);
    printf("sum is %d\n",sum(n));
    return 0;
}
 int sum(int a)
{
    int  static s=0;
   if (a>0)
   {
    s=s+a;
     sum(a-1);
    // printf("%d",sum);
   }
   return s;
}
   
