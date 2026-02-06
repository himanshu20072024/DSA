#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter number of horizontal lines or rows:");
    scanf("%d",&a);
    printf("Enter number of verticle lines or columns:");
    scanf("%i",&b);
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}