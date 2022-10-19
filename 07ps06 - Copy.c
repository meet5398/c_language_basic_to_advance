#include<stdio.h>
void table(int *mul,int num,int n)
{
   int multi,i; 
   for ( i = 0; i < n; i++)
   {
      mul[i]=num*(i+1);
   }
   printf("table of %d is\n",num);
   for ( i = 0; i <n; i++)
   {   
       printf("%d * %d = %d",num,i+1,mul[i]);
       printf("\n");
   }
   
   printf("************************\n\n");
}
int main()
{
    int mul[3][10];
     table(mul[0],2,10);
     table(mul[1],7,10);
     table(mul[2],22,10);
     table(mul[2],38,10);
}
