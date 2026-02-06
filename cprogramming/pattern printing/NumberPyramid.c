#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    for(int i=i;i<=a;i++)
    {
        for(int j=1;j<=a-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++)
        {
            printf("%d",2*k-1);
        }
        printf("\n");
    }
    return 0;
}