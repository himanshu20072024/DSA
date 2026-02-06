#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number : ");
    int count=0;
    scanf("%d",&a);
    int b;
    printf("Enter the size of the array : ");
    scanf("%d",&b);
    int c[b];
    for(int i=0;i<b;i++)
    {
        printf("Enter element number %d : ",i+1);
        scanf("%d",&c[i]);
    }
    for(int i=0;i<b;i++)
    {
        for(int k=i+1;k<b;k++)
        {
           for(int j=k+1;j<b;j++)
           {
                if(c[i]+c[j]+c[k]==a)
                {
                   count +=1;
                   printf("(%d,%d,%d)\n",c[i],c[k],c[j]);
                }
           }
        }
    }
    printf("%d",count);
    return 0;
}