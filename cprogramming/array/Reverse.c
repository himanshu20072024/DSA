#include<stdio.h>
void reverse(int arr[])
{
    int i=0;
    int j=6;
    while(i<j)
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    return;
}
int main()
{
    int a[7];
    for(int i=0;i<7;i++)
    {
        printf("Enter %d numer of array :",i+1);
        scanf("%d",&a[i]);
    }
    reverse(a);
    for(int i=1;i<7;i++)
    printf("%d ",a[i]);
    return 0;
}