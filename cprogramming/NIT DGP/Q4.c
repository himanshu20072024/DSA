#include<stdio.h>
int main()
{
    int a;
    printf("Enter size of array: ");
    scanf("%d",&a);
    int arr[a],arr1[a];
    for(int i = 0; i < a; i++)
    {
        printf("Enter element %d of array: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(int j = 0; j < a; j++)
    {
        arr1[j] = arr[a - j - 1];
    }

    printf("The reverse array is: ");
    for(int j = 0; j < a; j++)
    {
        printf("%d  ", arr1[j]);
    }

    return 0;
}
