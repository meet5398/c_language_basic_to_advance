#include<stdio.h>
int lcm(int,int ,int);
int main()
{
    int a,b,c;
    printf("enter thre intiger\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("lcm of %d %d %d is \n",a,b,c);
    lcm(a,b,c);
};
int lcm (int a ,int b, int c)
{
    int max;
    if(a>b && a>c)
    max=a;
    else if(b>c && b>a)
    max=b;
    else
    max=c;
    while(1){
    if(max%a==0 && max%b==0 && max%c==0)
    {
     break;
     }
     max++;
    }
    printf("lcm is %d",max);
}