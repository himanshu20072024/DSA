#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a;
    printf("Enter size of array:");
    scanf("%i",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        printf("Enter element no. %d : ",i+1);
        scanf("%i",&arr[i]);
    }
    for(int i=0;i<a-1;i++)
    {
        bool flag=true;
        for(int j=0;j<a-1-i;j++)
        {
            if(arr[j]<arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=false;
            }
        }
        if(flag==true) break;
    }
    for(int i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}