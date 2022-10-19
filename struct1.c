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
    e1.ecode=3423;
    e1.salary=44345.34;
    strcpy(e1.ename,"lover point");
    printf("employee code %d\n",e1.ecode);
    printf("salary %f\n",e1.salary);
    printf("employee name %s\n",e1.ename);

return 0;
}