#include <stdio.h>

// Function to perform Linear Search
int LinearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        // Step 1: Compare current element with target
        if (arr[i] == target)
            return i; // Return index if found
    }
    return -1; // Return -1 if target is not found
}

int main() {
    int n, target;

    // Step 2: Input the size of the array
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];

    // Step 3: Input the elements of the array
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 4: Input the element to search
    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Step 5: Call the Linear Search function
    int result = LinearSearch(arr, n, target);

    // Step 6: Print the result
    if (result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found in the array.\n");

    return 0;
}
