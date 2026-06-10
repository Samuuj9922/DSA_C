#include<stdio.h>

void insertionSort(int arr[],int size)
{
    int i,j,key;

    for(i=1;i<size;i++)
    {
        key=arr[i];
        
        for(j=i-1;j>=0 && arr[j]>key;j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=key;
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
    int arr[]={7,6,3,4,1};   
    int size=sizeof(arr)/ sizeof(arr[0]);     
                             
    printf("Unsorted Array:");
    printArray(arr, size);

    printf("\n");

    
    insertionSort(arr,size);  

    printf("Sorted Array with Insertion sort:");

    printArray(arr,size);
    return 0;
    
}