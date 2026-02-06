#include<stdio.h>
int main()
{
    int a,b,c,remainder;
    printf("enter first number to be divided:");
    scanf("%i",&a);
    printf("enter second number which will divide:");
    scanf("%d",&b);
    c=a/b;
    printf(" The remainder when %i is divided by %i is:%i",a,b,remainder=a-(b*c));
    return 0;
}