#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first number a :");
    scanf("%d",&a);
    printf("Enter second number b :");
    scanf("%d",&b);
    c=a%b;
    printf("the remainder when %d is divided by %d is %d: ",a,b,c);
    return 0;
}