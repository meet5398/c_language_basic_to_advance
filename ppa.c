//progam to check it is armstrong or perfect or prime NUMBER
#include <stdio.h>
#include <math.h>
 
int Check_Armstrong (int Number);
int Perfect_Number(int Number); 
int Prime_Number(int Number); 
 
int main()
{
	int Number;
 
  	printf("\nPlease Enter Number to Check whether it is an Armstrong, Prime, or Perfect :  ");
  	scanf("%d", &Number);
  	
 	if (Check_Armstrong(Number))
    	printf("\n %d is an Armstrong Number.", Number);
  	else
    	printf("\n %d is not an Armstrong Number.", Number);
	if(Prime_Number(Number) )
   		printf("\n %d is a Prime Number", Number);
   	else
   		printf("\n %d is Not a Prime Number", Number);
   		
	if (Perfect_Number(Number) ) 
    	printf("\n %d is a Perfect Number", Number) ;   
 	else   
    	printf("\n %d is not a Perfect Number", Number) ;   
 
  return 0;
}

int Check_Armstrong (int Number)
{
	int Temp, Reminder, Times = 0, Sum = 0;
	Temp = Number;
	
	while (Temp != 0) 
	{
		Times = Times + 1;
     	Temp = Temp / 10;
 	}
  
  	for(Temp = Number; Temp > 0; Temp =  Temp /10 )
   	{
    	Reminder = Temp % 10;
    	Sum = Sum + pow(Reminder, Times);
   	}
  	if ( Number == Sum )
  		return 1;
  	else
	 	return 0; 	
}
int Perfect_Number(int Number)   
{
	int i, Sum = 0 ;   
 
 	for(i = 1 ; i < Number ; i++)   
  	{
  		if(Number % i == 0)
		    Sum = Sum + i ;   
  	}    
 
 	if (Sum == Number) 
    	return 1;   
 	else   
    	return 0;   
}

int Prime_Number(int Number)
{
	int i, Count = 0;
	
	for (i = 2; i <= Number/2; i++)
   	{
    	if(Number%i == 0)
     	{
       		Count++;
     	} 
    }
   	if(Count == 0 && Number != 1 )
   		return 1;
   	else
   		return 0;
}