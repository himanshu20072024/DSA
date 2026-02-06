#include<stdio.h>  // bubblesort is stable stable matlab agar ek same element more than 1 times aata hai toh unki relative posiiton same honi cahie sorting hone ke baad bhi
#include<stdbool.h>
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
    for(int i=0;i<a-1;i++)
    {
        bool himanshu=true;
        for(int j=0;j<a-i-1;j++)
        {
            if(arr[j]>arr[j+1]) 
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                himanshu=false;
            }
        }
        if(himanshu==true) break;
    }
    for(int i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}