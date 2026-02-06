#include<stdio.h>  // selection sort is unstable 
#include<stdbool.h>
int main()
{
    int a;
    printf("Enter size of array:");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        printf("Enter element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<a;j++)
        {
            if(arr[j]<arr[minIndex])  minIndex=j;
        }
        int temp=arr[minIndex];
        arr[minIndex]=arr[i];
        arr[i]=temp;
    }
    for(int i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}