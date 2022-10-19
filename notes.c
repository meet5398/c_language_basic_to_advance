#include<stdio.h>
int main()
{
    int two,five,one,a,b,c,d,ten,e;
    printf("enter the amount you wqnt to convert into notes\n");
    scanf("%d",&a);
    two=a/2000;
    b=a%2000;
    five=b/500;
    c=b%500;
    one=c/100;
    d=c%100;
    ten=d/10;
    printf("100 ruppes notes are---%d\n",one);
    printf("five hundred rupees notes are----%d\n",five);
    printf("2000 ruppes notes are----%d\n",two);
    printf("ten ruppes notes are %d---",ten);
    return 0;
    
}