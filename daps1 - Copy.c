#include<stdio.h>
#include<stdlib.h>
int main()
{   FILE *m;
    int *a;
    int n;
    int c;
    m=fopen("dma.txt","w");
    printf("which table do you want to print \n");
    scanf("%d",&c);
    printf("till how much you want to print \n ");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
     printf("the table of %d\n",c);
    for (int  i = 1; i <= n; i++)
    { 
        a[i]=i*c;
    }
    for (int  i = 1; i <=n; i++)
    {
        fprintf(m,"%d * %d = %d\n",c,i,a[i]);    
    }
    int v;
    printf("how many multplier you want to print after reallocation\n");
    scanf("%d",&v);
    for (int  i = 1; i <= v; i++)
    { 
        a[i]=i*c;
    }
    for (int  i = 1; i <= v; i++)
    {
        fprintf(m,"%d * %d = %d\n",c,i,a[i]);    
    }
    fclose(m);
  return 0;  
}