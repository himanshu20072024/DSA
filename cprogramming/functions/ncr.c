#include<stdio.h>
int fact(int x)
{
    int fact=1;
    for(int i=2;i<=x;i++)
    fact=fact*i;
    return fact;
}
int main()
{
    int a;
    printf("Enter n:");
    scanf("%d",&a);
    int b;
    printf("Enter r:");
    scanf("%d",&b);
    int c=fact(a)/(fact(b)*fact(a-b));
    printf("The ncr is:%d",c);
    return 0;
}