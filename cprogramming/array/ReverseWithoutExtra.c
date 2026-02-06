#include<stdio.h> 
void reverse(int arr[],int a)
{
    int i=0;
    int j=a-1;
    int temp;
    while(i<j)
    {
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
    int a;
    printf("Enter the size of array ; ");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    reverse(arr,a);
    printf("The reverse array is:\n");
    for(int i=0;i<a;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}