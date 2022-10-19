// project for guessing a number 
//game:::: play it harder and enjoy it harder
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
 int number,guess,count=1;
 srand(time(0));
 number= rand()%100+1;
 //printf("the number is %d\n",number);//generate random number between 1 and 100
  printf("guess the number between 1 to 100\n");
 do
 {
    
     scanf("%d",&guess);
     if (guess>number)
     {
        printf("lower number please\n");
     }
     else if  (guess<number)
     {
        printf("higher number please\n");
    
     }
     else
     {
         printf("you guess in %d attempts \n",count);
     }
     
     count++;
     
     
 } while (guess!=number);
 
 return 0;

}