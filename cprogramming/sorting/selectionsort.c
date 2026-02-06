#include<stdio.h>
#include<limits.h>
int main()
{
    int a;
    printf("Enter size of array:");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a-1;i++)
    {
        int min_index = i;
        for(int j=i+1;j<a;j++)
        {
           if(arr[j]<arr[min_index])   min_index=j;
        }
        int temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
    }
    for(int i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }


    return 0;
}