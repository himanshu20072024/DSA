#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter  num:");
    scanf("%i %i %i",&a,&b,&c);
    a>b ? ((a>c) ? printf("a is greatest") : printf("c is greatest")) : (b>c) ? printf("b is greatest") : printf("c is greatest");
    return 0;
}