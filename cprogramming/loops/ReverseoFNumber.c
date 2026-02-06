#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter your number:");
    scanf("%i",&a);
    b=0;
    while(a!=0)
    {
        b=b*10;
        b=b+(a%10);
        a=a/10;

    }
    printf("Reverse of number is%d",b);
    return 0;
}