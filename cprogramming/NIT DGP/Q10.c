#include<stdio.h>
int main()
{
    int a;
    printf("Enter the size of array:");
    scanf("%d",&a);
    int arr[a];
    printf("Enter the values of array:");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int z=0;
    printf("Enter a number you entered in the array to remove and telling you the new size of array:");
    int b;
    scanf("%d",&b);
    for(int i=0;i<a;i++)
    {
        if(arr[i]==b)
        {
            continue;
        }
        else
        z++;
    }
    printf("The new size of array is %d",z);
    return 0;
}