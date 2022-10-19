#include<stdio.h>
int main()
{
    int i,j,count,n;
    printf("enter number you want to find prime factorial\n");
    scanf("%pd",&n);
     printf("prime factorial are as followed:\n");
    for ( i = 2; i <=n; i++)
    {
        if (n%i==0)
        {    
            //printf("%d",i);
            count=0;
            for ( j = 2; j <=i/2; j++)
            {
                 if (i%j==0)
                 {
                     count++;
                     break;
                 }     
            }
             if (count==0 && i!=1)
                 {
                    printf("%d\n",i);
                 }
        }
        
    }
    return 0;
    }