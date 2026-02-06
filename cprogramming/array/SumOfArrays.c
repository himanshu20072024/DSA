#include<stdio.h>
int main()
{
    int a,sum=0;
    printf("Enter number of elements you want in array:");
    scanf("%d",&a);
    int b[a];
    for(int i=0;i<a;i++)
    {
        printf("Enter number %d : ",i+1);
        scanf("%d",&b[i]);
    }
    for(int j=0;j<a;j++)
    {
        sum=sum+b[j];
    }
    printf("The sum of all elements is : %d",sum);
    return 0;
}