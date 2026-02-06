#include<stdio.h>
int main()
{
    int a,b,c=1,d;
    printf("Enter first number a : ");
    scanf("%d",&a);
    printf("Enter second number b : ");
    scanf("%d",&b);
    for(int i=1;i<=b;i++)
    {
        c=c*a;
        printf("%d raised to the powers of %i is %d\n",i,a,c);
    }
    
    return 0;
}