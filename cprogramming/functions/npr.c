#include<stdio.h>
int factorial(int x)
{
    int fact=1;
    for(int i=1;i<=x;i++)
    fact=fact*i;
    return fact;
}
int main()
{
    int a,b;
    printf("Enter n : ");
    scanf("%i",&a);
    printf("Enter r : ");
    scanf("%d",&b);
    int npr=factorial(a)/factorial(a-b);
    printf("The npr is : %d",npr);
    return 0;
}