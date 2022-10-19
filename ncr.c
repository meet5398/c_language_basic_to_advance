#include<stdio.h>
int main()
{
    int n,c=1,r,fact=1,ra=1,i,d=1,ncr;
    //n is total no of things
    //r is no of things you are choosing out of total things
    printf("enter the number (value of n)\n");
    scanf("%d",&n);
    printf("enter the value of r\n");
    scanf("%d",&r);
    //ncr=fact(n)/(fact(n-r)*fact(r));
    for ( i = 1; i <=n; i++)
    {
        fact=fact*i;
       // printf("fact%d",fact);
    }
    for ( i = 1; i <= r; i++)
    {
        ra=ra*i;
        //printf("ra%d",ra);
    }
    c=n-r;
    for ( i = 1; i <=c; i++)
    {
        d=d*i;
      //  printf("d is %d",d);
    }
    
    ncr=fact/(ra*d);// you can use fact/r also
    printf("ncr of given data is %d",ncr);
    return 0;
}
