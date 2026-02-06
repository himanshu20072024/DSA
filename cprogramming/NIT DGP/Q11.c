#include<stdio.h>
int reverse(int arr[],int size)
{
    int a=0,b=size-1;
    while(a<b)
    {
        int temp=arr[a];
        arr[a]=arr[b];
        arr[b]=temp;
        a++;
        b--;
    }
}
int main()
{
    int a;
    printf("Enter the size of array:");
    scanf("%d",&a);
    int arr[a];
    printf("Enter the array:\n");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++)
    {
        reverse(arr,a);
    }
    printf("The reverse array is:");
    for(int i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}