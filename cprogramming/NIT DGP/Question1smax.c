#include<stdio.h>
#include<limits.h>
int main()
{
    int a,max=INT_MIN,smax=INT_MIN;
    printf("Enter the size of array:");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<a;j++)
    {
        if(max<arr[j])
        {
            smax=max;
            max=arr[j];
        }
        else if(max!=arr[j] && smax<arr[j])
        {
            smax=arr[j];
        }
    }
    printf("\n\nThe second maximum is %d",smax);
    return 0;
}