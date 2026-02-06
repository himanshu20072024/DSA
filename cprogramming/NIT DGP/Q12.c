#include<stdio.h>
int main()
{
    int a;
    printf("Enter the size of array:");
    scanf("%d",&a);
    printf("Enter the arraay:\n");
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the sum whose pairs you want :");
    int b;
    scanf("%d",&b);
    for(int i=0;i<a-1;i++)
    {
        for(int j=i;j<a-i-1;j++)
        {
            if(arr[i]+arr[j]==b)
            printf("(%d,%d)",arr[i],arr[j]);
        }
    }
    return 0;
}