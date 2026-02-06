#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    int b=0;
    int c=a;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=c;k++)
        {
            printf("*");
        }
        b+=1;
        c-=1;
        printf("\n");
    }
    return 0;
}