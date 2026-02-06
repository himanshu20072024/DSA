#include<stdio.h>
int main()
{
    int a;
    printf("Enter size of array : ");
    scanf("%d",&a);
    int b[a];
    for(int i=0;i<a;i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&b[i]);
    }
    for(int j=0;j<a-1;j++)
    {
        for(int k=0;k<a-j-1;k++)
        {
          if(b[k]>b[k+1])
          {
              int temp;
              temp=b[k];
              b[k]=b[k+1];
              b[k+1]=temp;
          }
        }
    }
    for(int i=0;i<a;i++)
    printf("%i ",b[i]);
    return 0;
}