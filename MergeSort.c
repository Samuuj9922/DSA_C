#include<stdio.h>

void merge(int arr[] , int start,int mid,int end)
{
    int i,j,k;
    int sizeL=mid-start+1;


    int sizeR=end-mid;

    int L[sizeL],R[sizeR];

    for(i=0;i<sizeL;i++)
    L[i]=arr[start+i];

    for(j=0;j<sizeR;j++)
    R[j]=arr[mid+1+j];      

    i=0;
    j=0;
    k=start;

    while(i<sizeL && j<sizeR)
    {
        if(L[i]<=R[j])
        {
           arr[k]=L[i];
           i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < sizeL)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j < sizeR)
    {
        arr[k] = R[j];
        j++;
        k++;
    }

}

void mergeSort(int arr[],int start,int end)
{
    if(start < end)
    {
        int mid=(start+end)/2;

        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);

        merge(arr,start,mid,end);
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
    int arr[]={12,11,13,5,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr,size);

    mergeSort(arr,0,size-1);

    printf("\n Sorted array is\n");
    printArray(arr,size);
    return 0;   
}



