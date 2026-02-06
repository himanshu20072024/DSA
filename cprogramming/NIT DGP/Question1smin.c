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
        scanf("%d",&arr[i]);
    }
    int min=INT_MAX,smin=INT_MIN;
    for(int j=0;j<a;j++)
    {
        if(arr[j]<min)
        {
           smin=min;
           min=arr[j];
        }
        else if(arr[j]!=min && arr[j]<smin)
        {
            smin=arr[j];
        }
    }
    printf("The second minimum is %d",smin);
    return 0;
}