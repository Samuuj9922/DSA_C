#include<stdio.h>

void swap(int* a ,int* b)
{

    int temp = *a;
    *a = *b;
    *b = temp;
}

    int partition(int arr[],int start,int end)
    {
        int pivot = arr[start];
        int i = start+1;
        int j;
        for(j= start +1 ; j<= end ; j++)
        {
            if(arr[j]< pivot)
            {
                swap(&arr[i] , &arr[j]);
                i++;
            }
        }

        swap(&arr[start] , &arr[i-1]);
        return i-1;
    }



void quickSort(int arr[] , int start ,int end)
{
    if(start<end)
    {
        int pivotIndex  = partition(arr , start , end);
        quickSort(arr , start ,pivotIndex-1);
        quickSort(arr , pivotIndex +1 , end);
    }
}

void printArray(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{
     int arr[]={23, 45, 16 , 8, 15 , 42,4};   
    int n =sizeof(arr)/ sizeof(arr[0]);     
                             
    printf("Original Array:\n");
    printArray(arr, n);

    printf("\n");

    quickSort(arr ,0 , n-1);

    printf("Sorted Array:\n");

    printArray(arr,n);
    return 0;
}