#include<stdio.h>
int main()
{
    int n;
    printf("entr any integer you want to check positive or negative\n");
    scanf("%d",&n);
    if (n>0)
    {
        printf("%d is postive number\n",n);

    }
    else if (n<0)
    {
        printf("%d is negative number \n",n);
    }
    else if (n==0)
    {
        printf("it is 0\n");

    }
    else
    {
        printf("dont be our smart\n");
    }
    
    
}