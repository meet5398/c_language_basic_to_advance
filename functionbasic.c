#include<stdio.h>
void display();//function prototype
void good_morning();
void good_afternoon();
void good_evening();
int main()
{    printf("i love india\n");
    display();
    printf("india\n");
    good_morning();
    good_afternoon();//function call
    good_evening();
    return 0;
}
void display()//function definition
{
  printf("my first program of function\n");
}
void good_morning()
{
    printf("good morning\n");
}
void good_afternoon()
{
    printf("good afternoon\n");
}
void good_evening()//function definition
{
    printf("good evening\n");
}