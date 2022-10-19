#include<stdio.h>
 int fact(int);
int main()
{
    int n,r,ncr;
    //n is total no of things
    //r is no of things you are choosing out of total things
    printf("enter the number (value of n)\n");
    scanf("%d",&n);
    printf("enter the value of r\n");
    scanf("%d",&r);
    ncr=fact(n)/(fact(r)*fact(n-r));
    printf("ncr is %d",ncr);
}
    fact(int a){
        int i,b=1;
    for ( i = 1; i <=a; i++)
    {
        b=b*i;
       

    }
    return b;
} 
    