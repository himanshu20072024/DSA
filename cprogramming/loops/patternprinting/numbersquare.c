#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter no. of horizontal lines:");
    scanf("%d",&a);
    printf("Enter number of verticle lines:");
    scanf("%d",&b);
    for(int i=1;i<=a;i++)
       {
        for(int j=1;j<=b;j++)
        printf("%d",j);
        printf("\n");
       }
    return 0;
}