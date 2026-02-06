#include <stdio.h>

void merge(int arr[] ,int start ,int mid ,int end)
{
    int n1 = mid - start + 1;
    int n2 = end - mid;

    int S[n1] ,E[n2];
    for(int i = 0 ; i < n1 ; i++)
    {
        S[i] = arr[start + i];
    }
    for(int j = 0 ; j < n2 ; j++)
    {
        E[j] = arr[mid + 1 + j];
    }

    int i = 0 ,j = 0 ,k = start;
    int k;

    while(i<n1 && j<n2)
    {
        if(S[i] <= E[j])
            arr[k++] = S[i++];
        else
            arr[k++] = E[j++];
    }

    while(i < n1)
    {
        arr[k++] = S[i++];
    }
    while(j < n2)
    {
        arr[k++] = E[j++];
    }
}

void mergeSort(int arr[] ,int start ,int end)
{
    if(start < end)
    {
        int mid = start + (end - start)/2;

        mergeSort(arr ,start ,mid);
        mergeSort(arr ,mid+1 ,end);

        merge(arr ,start ,mid ,end);
    }


}

// Main function
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Perform merge sort
    mergeSort(arr, 0, n - 1);

    // Output sorted array
    printf("Sorted array using Merge Sort:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
