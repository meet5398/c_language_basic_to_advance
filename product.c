//program to print product of digit in number
#include<stdio.h>
int main()
{
    int n,r,p;
    printf("enter any number\n");
    scanf("%d",&n);
for ( p=1; n>0; n=n/10)
{
   r=n%10;
   p=p*r;
 
}
printf("product of digit is %d",p);
return 0;
}