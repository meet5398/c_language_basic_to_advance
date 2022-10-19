#include<stdio.h>
int  cha_10(int a);
int main()
{
    int a=23;
    printf("the value of a is %d\n",a);
    cha_10(a);
    printf("the value of a is %d\n",a);
    // the value of a do not change in above statement because during
    //call ing value of a by function (value of a is coppied to function)
    //no original value is passed 
    //but if you do it by call by reference then it will make changes because
    // there address of variable is passed so changes made at  address
    //may reflect

}
int cha_10(int a)
{
    a=a*10;
    return a;
}