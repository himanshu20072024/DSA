#include<stdio.h>
int main()
{
    int a,b,c,fact;
    printf("Enter a number:");
    scanf("%d",&a);
    fact=1;
    c=a;
    while(a!=0)
    {
        fact=fact*a;
        a--;
        c=c/10;
    }
    printf("factorail of number you entered is:%d",fact);

    return 0;
}