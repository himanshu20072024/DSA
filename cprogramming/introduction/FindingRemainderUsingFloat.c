#include<stdio.h>
int main()
{
    int a,b,remainder;
    printf("enter first number to be divided:");
    scanf("%i",&a);
    printf("enter second number which will divide:");
    scanf("%d",&b);
    remainder=a%b;
    printf(" The remainder when %i is divided by %i is:%i",a,b,remainder);
    return 0;

}