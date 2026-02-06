#include<stdio.h>
int main()
{
    int a,product=1;
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
        product=product*b[j];
    }
    printf("The product of all elements is : %d",product);
    return 0;
}