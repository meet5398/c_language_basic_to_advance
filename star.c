#include<stdio.h>
#include<conio.h>
void star(int a);
int main()
{
    int i,a,j;
    printf("how many lines of star do you want to print\n");
    scanf("%d",&a);
    star(a);
    getch();
    return 0; 
}
void  star(int a)
{
    int i;
    if (a==1)
   {
    printf("*\n");
    return;
   }
    
    
    for ( i = 0; i < 2*a-1; i++)
    {
       printf("*");
    }
    printf("\n");
    star(a-1);
   
}
    