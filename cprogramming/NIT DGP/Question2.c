#include<stdio.h>
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
    int b;
    printf("Enter the number you want to check if present or not:");
    scanf("%d",&b);
    for(int j=0;j<a;j++)
    {
        if(arr[j]==b)
        {
            printf("Number is present in array");
            return 0;
        }
    }
            printf("Number is not present in array");
    return 0;
}