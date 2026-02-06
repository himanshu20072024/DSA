#include <stdio.h>

// Function to perform Binary Search
int BinarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        // Calculate the middle index
        int mid = left + (right - left) / 2;

        // Step 1: Check if the target is at the middle
        if (arr[mid] == target)
            return mid; // Found the target, return its index

        // Step 2: If target is smaller, search in the left half
        if (arr[mid] > target)
            right = mid - 1;
        // Step 3: If target is larger, search in the right half
        else
            left = mid + 1;
    }

    return -1; // If element is not found, return -1
}

int main() {
    int n, target;

    // Step 1: Input the size of the array
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];

    // Step 2: Input the sorted elements of the array
    printf("Enter the sorted elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Input the element to search
    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Step 4: Call the Binary Search function
    int result = BinarySearch(arr, 0, n - 1, target);

    // Step 5: Print the result
    if (result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found in the array.\n");

    return 0;
}
