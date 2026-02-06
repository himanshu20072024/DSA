#include<stdio.h>
int factorial(int x)
{
    int fact=1;
    for(int i=1;i<=x;i++)
    fact=fact*i;
    return fact;
}
int ncr(int x,int y)
{
   int ncr=factorial(x)/(factorial(y)*factorial(x-y));
}
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    for(int i=0;i<=a;i++)
    {
        for(int k=1;k<=a-i;k++)
        {
            printf(" ");
        }
        int b=1;
        for(int j=0;j<=i;j++)
        {
            printf("%d ",b);
            b=b*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}