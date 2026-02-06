#include<stdio.h>
int main()
{
    int a;
    printf("Enter the size of array:");
    scanf("%d",&a);
    printf("Enter the array:");
    int arr[a],arr1[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int b;
    printf("\n");
    printf("Enter which largest element you want to find: ");
    scanf("%d",&b);
    if(b<=a)
    {
       printf("\n");
       for(int i=0;i<a;i++)
       {
           arr1[i]=arr[i];
       }
       for(int i=0;i<a-1;i++)
       {
           for(int j=0;j<a-1-i;j++)
           {
               if(arr[j]<=arr[j+1])
               {
                    int temp;
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
               }
           }
       }
       printf("The %dth largest number in array is :%d\n",b,arr[b-1]);
    }
    else
    printf("Enter correct value of findiong greatest number!!");
    printf("\n\nThe selectionshot is:\n ");
    for(int i=0;i<a;i++)
    {
        printf("%i  ",arr[i]);
    }
    return 0;
}