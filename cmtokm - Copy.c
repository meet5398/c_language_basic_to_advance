#include<stdio.h>
int main()
{
    int cm;
    float km ,m;
    printf("enter the value in cm\n");
    scanf("%d",&cm);
    m=cm/100;
    km=m/1000;
    printf("m=%f\n",m);
    printf("km=%f\n",km);
    return 0;
}