// grading system using switcg case
#include<stdio.h>
int main()
{
    int a,b,c,sum,percent;
    printf("enter your marks of \nphysics \n chemistry\n maths\nout of 100\n");
    scanf("%d%d%d",&a,&b,&c);
    sum= a+b+c;
    percent=sum/3;
    printf("your percetage is %d\n",percent);
    switch (percent/10)
    {
    case 10:
    case 9:
        printf("grade A+\n");
        break;
     case 8:
        printf("grade A\n");
        break;
    case 7:
        printf("grade B+\n");
        break;
        case 6 :
        printf("grade B\n");
        break;
        case 5 :
        printf("grade c+\n");
        break;
        case 4:
        printf("grade c\n");
        break;
        case 3:
        case 2:
        case 1:
        printf("grade D and you are fail \n");
        break;
    default: printf("don't be our smart\n");
        break;
    }
}