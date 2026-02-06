#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter first number: ");
    scanf("%i",&a);
    printf("enter second number: ");
    scanf("%i",&b);
    printf("enter third number: ");
    scanf("%i",&c);
    if(a>b)
      {
        if(a>c)
        printf("a is greatest");
        else
        printf("c is greatest");
      }
    else
      {
        if(b>c)
        printf("b is greatest");
        else
        printf("c is greatest");
      }
    return 0;
}