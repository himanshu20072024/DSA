#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int arr1[5]={1,2,3,4,5};
    int arr2[5];
    for(int i=0;i<5;i++)
    {
        arr2[i]=arr[i]+arr[i];
    }
    printf("The sum of arrays is:");
    for(int j=0;j<5;j++)
    {
        arr2[j]=arr[j]+arr1[j];
        printf("\n%d\n",arr2[j]);
    }
    
    return 0;
}