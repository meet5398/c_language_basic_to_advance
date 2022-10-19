#include<stdio.h>
int main()
{
    int n,a,b;
    printf("enter any two integer\n");
    scanf("%d%d",&a,&b);
    printf(" 1 for summation\n 2 for subtraction\n 3 for multiplication\n 4 for division\n");
    printf("enter your choice\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1 :
        printf("summation is %d\n",a+b);
        break;
    case 2 :
       printf("subtraction is %d\n",a-b);
       break ;
    case 3:
       printf("multiplication is %d\n",a*b);
       break ;
    case 4: 
       printf("division is%d\n",a/b);
       break;
    default:printf("don't be our smart\n");
        break;
    }
    return 0;
}