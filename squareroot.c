#include<stdio.h>
#include<math.h>
int main()
{
    
    double a,n;
    printf("emter any square number\n");
    scanf("%lf",&n);
  //  a=pow(n,1/2);
    a= sqrt(n);
    printf("%lf",a);
    return 0;
}