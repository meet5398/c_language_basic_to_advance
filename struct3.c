//arrow operator is introduced
#include<stdio.h>
#include<string.h>
struct employee{
    int ecode;
    float salary;
    char ename[34];
};
int main()
{
    struct employee e1;
    struct employee *ptr=&e1;
    //ptr=&e1;
   // (*ptr).ecode=5398;//you can erite it as ptr->ecode=5398; it is called arrow oprator
    ptr->ecode=5398;
    printf("%d",e1.ecode);
    
}