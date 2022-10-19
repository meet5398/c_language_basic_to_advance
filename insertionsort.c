 #include<stdio.h>
 int main()
 {   int n;
    scanf("%d",&n);
    int a[n];
     for (int i = 0; i <n; i++)
     {  printf("enter the value of the element\n");
        scanf("%d",&a[i]);
     }
     int i,j;
     for ( i = 1; i<n; i++)
     {
         int current=a[i];
         j=i-1;
         while (a[j]>i && j>=0)
         {
            a[j+1]=a[j];
            j--;
         }
       a[j+1]=current;  
     }
     for (int  i = 0; i <n; i++)
     {
         printf("%d\n",a[i]);
     }
     
 }    

     