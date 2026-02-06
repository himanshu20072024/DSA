#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter number of rows:");
    scanf("%d",&a);
    printf("Enter the number of column:");
    scanf("%i",&b);
    for(int i=1;i<=a;i++)
    {
     {
        for(int j=1;j<=i;j++)
        printf("*");
     }
        printf("\n");
    }
    return 0;
}