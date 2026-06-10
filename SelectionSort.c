#include<stdio.h>

void selectionSort(int arr[], int size)
{
    int i,j,minIndex,temp;

    for(i=0;i<size-1;i++)
    {
        minIndex = i;

        for(j=i+1;j<size;j++)
        {
            if(arr[j]< arr[minIndex])
            {
                minIndex =j;
            }
        }

        temp=arr[minIndex];
        arr[minIndex]=arr[i];
        arr[i]=temp;
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
    int arr[]={8,7,5,6,2};   
    int size=sizeof(arr)/ sizeof(arr[0]);     
                             
    printf("Originl Array:");
    printArray(arr, size);

    printf("\n");

    
    selectionSort(arr,size);  

    printf("Sorted Array:");

    printArray(arr,size);
    return 0;
    
}