#include<stdio.h> 
#include<math.h> 
 int main()    
{    
int n,r,sum=0,temp,times=0;    
printf("enter the number=");    
scanf("%d",&n);    
temp=n;  
while (temp!=0)
{
    times=times+1;
    temp=temp/10;
}
  printf("no of digit %d\n",times);
  temp=n;
while(temp>0)    
{    
r=temp%10;    
sum= sum+ pow(r,times);    
temp=temp/10;    
} 
printf("sum is %d\n",sum);
if(temp==sum)    
printf("armstrong  number\n ");    
else    
printf("not armstrong number\n");    
return 0;  
}   