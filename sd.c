// program  to find mean,variance and standard deviation
#include<stdio.h>
#include<math.h>
int main()
{
  int n,val[50],i;
   double sub,sum=0,d,var,mean,var_sum=0;
  printf("how much value you want to enter\n");
  scanf("%d",&n);
  printf("enter your value\n");
  for ( i = 1; i <=n; i++)
  {
       scanf("%d",&val[i]);
  }
  for ( i = 1; i <=n; i++)
  {
      sum=sum+val[i];
  }
  printf("sum is%lf\n",sum);
  mean=sum/(float)n;
  for ( i = 1; i <=n; i++)
  {
        sub=val[i]-mean;
        var_sum=var_sum+pow(sub,2);
  }   
  var=var_sum/(float)n;
    d=sqrt(var);
  printf("mean is %lf\n",mean);
  printf("variance is %lf\n",var);
  printf("sdandard deviation is %lf\n",d);
  return 0;
}