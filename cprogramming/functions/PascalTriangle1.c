#include<stdio.h>
int factorial(int x)
{
    int fact=1;
    for(int i=2;i<=x;i++)
    fact=fact*i;
    return fact;
}
int combination(int x,int y)
{
    int a;
    a=factorial(x)/(factorial(y)*factorial(x-y));
    return a;
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
        for(int j=0;j<=i;j++)
        {
          int b=combination(i,j);
          printf("%i ",b);
        }
        printf("\n");
    }
    return 0;
}