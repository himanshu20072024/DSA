#include<stdio.h>  // done youself 😁 // pushing zeros to end question 
int main()
{
    int a;
    printf("Enter size of array:");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        printf("Enter element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int brr[a];
    int j=0;
    for(int i=0;i<a;i++)
    {
        if(arr[i]!=0) 
        {
            brr[j]=arr[i];
            j+=1;
        }
        else
        {
            for(int k=j;k<a;k++)
            brr[k]=0;
        }
    }
    for(int i=0;i<a;i++)
    {
        printf("%d ",brr[i]);
    }
    return 0;
}