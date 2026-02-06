#include<stdio.h>
int main()
{
    int a;
    printf("Enter size of array:");
    scanf("%d",&a);
    int arr[a],arr1[a],arr2[a];
    for(int i=0;i<a;i++)
    {
        printf("Enter element %d of array: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<a;j++)
    {
        arr1[j]=arr[j];
        arr2[j]=arr[j];
    }
    for(int j=0;j<a/2;j++)
    {
        arr1[j]=arr[a-j-1];
    }
    int z=0;
    for(int j=a/2;j<a;j++)
    {
        arr1[j]=arr[a/2-z];
        z += 1;
    }
    printf("The reverse array is:");
    for(int j=0;j<a;j++)
    {
        printf("%d  ",arr1[j]);
    }
    
    return 0;
}