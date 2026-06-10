#include<stdio.h>
// fun to perform bubble sort
void bubbleSort(int arr[],int size)  //arr ,5
{
    int i;
    for(i=0;i<size-1;i++)         //0; 0<4  size =5-1; 0<4 to traverse all ele
    {
        int j;
        for(j=0;j<size-i-1;j++)    //j=0 ; 0<4; 5-0-1  remaining array ele
        {
            // swap if the ele found is greater than next ele
            if(arr[j]>arr[j+1])
            {
                // swap the ele
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

// fun to print the array
void printArray(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}



int main()
{
    int arr[]={2,6,5,7,8};   //5 4bytes (5*4=20bytes)
    int size=sizeof(arr)/ sizeof(arr[0]);  // 20/4=5       
                             
    printf("Originl Array:");
    printArray(arr, size);

    printf("\n");

    //sorting fun
    bubbleSort(arr,size);  //arr & size arr & 5

    printf("Sorted Array:");

    printArray(arr,size);
    return 0;
    
}