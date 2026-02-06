#include<stdio.h>
int main()
{
    int a,max,min,smax;
    printf("Enter size of array : ");
    scanf("%d",&a);
    int b[a];
    for(int i=0;i<a;i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&b[i]);
    }
    max=b[0]; 
    smax=b[0];
    for(int j=0;j<a;j++)
    {
        if(b[j]>max)
        {
           smax=max;
           max=b[j];
        }
        else if(max!=b[j] && smax<b[j])
        {
            smax=b[j];
        }
    }
    printf("%d",smax);
    // max=b[0];
    // for(int j=0;j<a;j++)
    // {
    //   {
    //     if(b[0]>b[j+1])
    //     b[0]=b[j+1];
    //   }
    //    min=b[0];
    // } 
    // smax=min;
    // for(int i=0;i<a;i++)
    // {
    //     if(b[i]<b[i+1])
    //     {
            
    //     }
    // }
    return 0;
}