#include<stdio.h>
int main()
{
    int a,b,c;
printf("enter first number");
scanf("%i",&a);
printf("enter second number");
scanf("%i",&b);
printf("enter third number");
scanf("%i",&c);
if(a>b && a>c)
{
    printf("a is greatest");
}
if(b>a && b>c)
{
    printf("b is greatest");
}
if(c>a && c>b)
{
    printf("c is greatest");
}
    return 0;
}