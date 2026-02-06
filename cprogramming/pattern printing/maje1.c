#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%i",&b);
    c=a*b;
    if(c%5==0 && c%2==0 && c%7==0)
    {
      printf("your luck is with you");
    }
    else
    {
        printf("your luck is not with you");
    }
    return 0;
}