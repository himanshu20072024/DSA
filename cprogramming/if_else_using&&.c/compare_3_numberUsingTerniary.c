#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter number a:");
    scanf("%d",&a);
    printf("Enter second number b:");
    scanf("%d",&b);
    printf("Enter third number c:");
    scanf("%d",&c);
    a>b ? ((a>c) ? printf("a is greatest") : printf("c is greatest")) : ((b>c) ? printf("b is greatest") : printf("c is greatest")) ; 
    return 0;
}