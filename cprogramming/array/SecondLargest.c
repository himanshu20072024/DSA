#include<stdio.h>
int main()
{
    int a;
    printf("Enter the size of array : ");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        printf("Enter element %d :",i+1);
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int smax=-1;
    for(int j=0;j<a;j++)
    {
        if(arr[j]>max)
        {
           smax=max;
           max=arr[j];
        }
        else if(smax<arr[j] && max!=arr[j])
        {
            smax=arr[j];
        }
    }
    int min=arr[0];
    for(int j=0;j<a;j++)
    {
        if(arr[j]<min)
        min=arr[j];
    }
    printf("Min is: %d\n",min);
    printf("Max is: %d\n",max);
    printf("Second Largest Number is:%d",smax);
    return 0;
}