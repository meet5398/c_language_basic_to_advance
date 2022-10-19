#include<stdio.h>
#include<string.h>
struct employee{
    int ecode;
    float salary;
    char ename[34];
};
int main()
{
    struct employee e1,e2,e3;
    printf("enter employee code of employe 1 \n");
    scanf("%d",&e1.ecode);
    printf("enter salary of employee 1 \n");
    scanf("%f",&e1.salary);
    printf("enter employee 1 name \n");
    scanf("%s",&e1.ename);

    printf("enter employee code of employe 2 \n");
    scanf("%d",&e2.ecode);
    printf("enter salary of employee 2 \n");
    scanf("%f",&e2.salary);
    printf("enter employee 2 name \n");
    scanf("%s",&e2.ename);
   
    printf("enter employee code of employe 3 \n");
    scanf("%d",&e3.ecode);
    printf("enter salary of employee 3 \n");
    scanf("%f",&e3.salary);
    printf("enter employee 3 name \n");
    scanf("%s",&e3.ename);

return 0;
}