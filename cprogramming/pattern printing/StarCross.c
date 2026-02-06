#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter any odd number:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            if(i==j)
            printf("*");
            else if(i+j==a+1)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}