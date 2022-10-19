#include<stdio.h>
void display();
void good_morning();
void good_afternoon();
void good_evening();
int main()
{    printf("i love india\n");
    display();
    printf("india\n");
    good_morning();
   
   
    return 0;
}
void display()
{
  printf("my first program of function\n");
}
void good_morning()
{
    printf("good morning\n");
     good_afternoon();
}
void good_afternoon()
{
    printf("good afternoon\n");
     good_evening();
}
void good_evening()
{
    printf("good evening\n");
}