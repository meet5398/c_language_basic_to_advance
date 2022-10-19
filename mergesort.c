#include<stdio.h>
void Merge(int * , int , int , int );
void MergeSort(int *array, int left, int right)
{
        int mid = (left+right)/2;
        if(left<right)
        {
                MergeSort(array,left,mid);
                MergeSort(array,mid+1,right);
                Merge(array,left,mid,right);
        }
}

void Merge(int *array, int left, int mid, int right)
{
        int tempArray[right-left+1];
        int pos=0,lpos = left,rpos = mid + 1;
        while(lpos <= mid && rpos <= right)
        {
                if(array[lpos] < array[rpos])
                {
                        tempArray[pos++] = array[lpos++];
                }
                else
                {
                        tempArray[pos++] = array[rpos++];
                }
        }
        while(lpos <= mid)  tempArray[pos++] = array[lpos++];
        while(rpos <= right)tempArray[pos++] = array[rpos++];
        int iter;
        for(iter = 0;iter < pos; iter++)
        {
                array[iter+left] = tempArray[iter];
        }
        return;
}
int main()
{
        int number_of_elements;
        printf("enter the number of element you want to enter \n");
        scanf("%d",&number_of_elements);
        int array[number_of_elements]; 
        printf("enter the element you want to sort\n");
       
        for(int iter = 0;iter < number_of_elements;iter++)
        {
                scanf("%d",&array[iter]);
        }
        MergeSort(array,0,number_of_elements-1); 
        for(int iter = 0;iter < number_of_elements;iter++)
        {
                printf("%d ",array[iter]);
        }
        printf("\n");
        return 0;
}

