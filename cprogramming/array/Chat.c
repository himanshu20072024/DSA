#include <stdio.h>
int main() 
{
    int arr[100], n, i, num, pos;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to insert: ");
    scanf("%d", &num);
    printf("Enter the position (1 to %d) to insert the number: ", n + 1);
    scanf("%d", &pos);
    if (pos < 1 || pos > n + 1) 
    {
        printf("Invalid position!\n");
        return 1;
    }
    for (i = n; i >= pos; i--) 
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = num;
    n++; 
    printf("Updated array:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
