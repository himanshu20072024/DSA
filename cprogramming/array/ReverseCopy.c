#include<stdio.h> // some error means not working check from chatgpt when you see again
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
    int brr[a];
    for(int i=0;i<a;i++)
    {
        brr[i]=arr[a-i-1];
        printf("%d\n",brr[i]);
    }
    return 0;
}