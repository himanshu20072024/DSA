#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function
int partition(int arr[], int start, int end) {
    int pivot = arr[end];  // Choosing the last element as pivot
    int i = start - 1;      // Index of smaller element

    for (int j = start; j < end; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[end]);  // Place pivot in the correct position
    return i + 1;  // Return pivot index
}

// Quick Sort function (recursive)
void quickSort(int arr[], int start, int end) {
    if (start < end) {
        int pivotIndex = partition(arr, start, end);

        quickSort(arr, start, pivotIndex - 1);  // Left of pivot
        quickSort(arr, pivotIndex + 1, end);    // Right of pivot
    }
}

// Main function
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Apply Quick Sort
    quickSort(arr, 0, n - 1);

    // Output sorted array
    printf("Sorted array using Quick Sort:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
