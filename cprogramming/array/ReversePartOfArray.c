#include<stdio.h> 
void reverse(int arr[],int i,int j)
{
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
    int a,b,c;
    printf("Enter the size of array ; ");
    scanf("%d",&a);
    int arr[a];
    printf("Enter the number from which you want to start reverse:");
    scanf("%d",&b);
    printf("Enter the number till where you want to reverse array:");
    scanf("%d",&c);
    for(int i=0;i<a;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    reverse(arr,b-1,c-1);
    printf("The reverse array is:\n");
    for(int i=0;i<a;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}