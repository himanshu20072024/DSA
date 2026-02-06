#include<stdio.h>
int main()
{
    int a;
    printf("Enter size of array: ");
    scanf("%d",&a);
    int arr[a],z=0;
    for(int i=0;i<a;i++)
    {
        printf("Enter element %d of array:",i+1);
        scanf("%d", &arr[i]);
    }
    int k=0;
    for(int i=0;i<a;i++)
    {
        for(int j=i+1;j<a;j++)
        {
            if(arr[i]==arr[j])
            {
                k=i;
                z=1;
                break;
            }
        }   
        if(z==1)  break;
    }
    if(z==1)
    {
        printf("First repeated element is:%d",arr[k]);
    }
    if(z==0)
    {
        printf("No repeated element");
    }
    return 0;
}