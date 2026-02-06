#include<stdio.h>
int main()
{
    int a;
    printf("Enter the size of array:");
    scanf("%d",&a);
    int arr[a],arr1[a];
    printf("Enter the array:\n");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++)
    {
        arr1[i]=arr[i];
    }
    for(int i=0;i<a-1;i++)
    {
        arr1[i+1]=arr[i];
    }
    arr1[0]=arr[a-1];
    for(int i=0;i<a;i++)
    {
        printf("%d ",arr1[i]);
    }
    return 0;
}