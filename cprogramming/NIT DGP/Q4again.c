#include<stdio.h>
int main()
{
    int a;
    printf("Enter size of array:");
    scanf("%d",&a);
    printf("Enter arrays values:\n");
    int arr[a],arr1[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++)
    {
        arr1[i]=arr[i];
    }
    // for reversing this array
    printf("The reverse array is:\n");
    for(int j=a-1;j>=0;j--)
    {
        printf("%d ",arr[j]);
    }
    printf("\nThe origional array is:\n");
    for(int i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}