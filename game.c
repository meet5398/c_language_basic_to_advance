#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int rockpapersysor(char you,char comp)
{
    if (you==comp)
    {
       return 0;
    }
     if (you=='s'&&comp =='p')
    {
        return 1;
    
    }
    else if(you=='p' && comp=='s')
    {
       return -1; 
    }
    if (you=='s' && comp=='r')
    {
        return -1;
    }
    else if (you=='r' && comp=='s')
    {
        return 1;
    }
    if (you=='r' && comp=='p')
    {
        return -1;
    }
    else if (you=='p' && comp=='r')
    {
        return 1;
    }  
}
int main()
{
    char comp,you;
    srand(time(0));
    int number=rand()%100+1;
    if (number<33)
    {
        comp='s';
    }
    else if (number>33&&number<66)
    {
        comp='p';
    }
    else
    {
        comp='r';
    }
    printf("enter 's' for sysor..\n enter 'p' for paper..\n enter 'r' for rock...\n");
    scanf("%c",&you);
    int result=rockpapersysor(you,comp);
    if (result==0)
    {
       printf("match draw!!\n");
    }
    else if (result==-1)
    {
       printf("you lose !!\n");

    }
    else
    {
        printf("you won!!\n");
    }
    printf("you have choosen %c and computer has choosen %c",you,comp);  
}