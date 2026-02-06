#include<stdio.h>
int main()
{
    int a;
    printf("Enter a  number:");
    scanf("%d",&a);
    int b=1;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=b;k++)
        {
            printf("*");
        }
        b=b+2;
        printf("\n");
    }
    return 0;
}