#include<stdio.h>

void SelectionSort(int arr[], int n)
{
    for(int i=0 ; i<n-1 ; i++)
    {
        int smallestIdx = i;
        for(int j=i+1 ; j<n ; j++)
        {
            if(arr[j] < arr[smallestIdx]) smallestIdx = j ;
        }
        // swap (arr[i], arr[smallestIdx]);
        int temp = arr[i];
        arr[i] = arr[smallestIdx];
        arr[smallestIdx] = temp;
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

    SelectionSort(arr, n);

    printf("After SelectionSort:");
    for(int i=0 ; i<n ; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}