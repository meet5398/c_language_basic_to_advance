//program to check number is perfect or not
#include <stdio.h>

int main()
{
     int number,i,result=0;
   printf("enter the number:");
   scanf("%d",&number);
   for(i=1;i<number;i++){
      if(number%i==0)
         result=result+i;
   }
   if(result==number) 
      printf("perfect number");
  
  
    return 0; 
}
