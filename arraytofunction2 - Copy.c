#include<stdio.h>
 void array(int *a,int i);
int main()
{
    int a[]={23,45,34,33,45,123};
    array(a,6);
}
void array(int *a,int n)
{
    int i;
    for ( i = 0; i<n ; i++)
    {
       printf("the element %d is %d\n",i+1,*(a+i));
    }
    
}