#include<stdio.h>
int main()
{
    int a;
    printf("Enter size of array: ");
    scanf("%d", &a);
    int arr[a],z=0;
    for(int i = 0; i < a; i++)
    {
        printf("Enter element %d of array: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(int j=0;j<a-1;j++)
    {
        for(int k=j+1;k<a;k++)
        {
            if(arr[j]==arr[k])
            {
                printf("First repeated element is: %d \n",arr[j]);
                z=1;
                break;
            }
        }
        if(z==1)
            break;
    }
    if(z==0)
    printf("No Number is repeated");
    return 0;
}