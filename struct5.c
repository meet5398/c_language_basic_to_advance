//use of type def
#include<stdio.h>
#include<string.h>
typedef  struct employee{
    int ecode;
    float salary;
    char ename[34];
}emp;//custom data type created as int and we can use it in whole program
void show( emp emp2)
{
    printf("employee number is %d\n",emp2.ecode);
    printf("employee salary is %f\n",emp2.salary);
    printf("employee name is %s\n",emp2.ename);
}
int main()
{
     emp e1;
     emp *ptr=&e1;
    ptr->ecode=5398;
    ptr->salary=533498.343;
    strcpy(ptr->ename,"raj kumar");
    show(e1);
    
}