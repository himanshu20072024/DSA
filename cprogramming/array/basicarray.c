#include<stdio.h>
int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
       printf("Enter element number %d : ",i);
       scanf("%d",&a[i]);   
    }
    for(int j=0;j<5;j++)
    {
        printf("%d\n",a[j]);
    }
    return 0;
}