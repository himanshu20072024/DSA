#include<stdio.h>

void BubbleSort(int arr[], int x)
{
    for(int i=0 ; i<x-1 ; i++)
    {
        for(int j=0 ; j<x-i-1 ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the elements:");
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }

    BubbleSort(arr, n);

    printf("After BubbleSort:");
    for(int i=0 ; i<n ; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}