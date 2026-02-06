#include<stdio.h>
int main()
{
    int num1;
    printf("Enter a number:");
    scanf("%i",&num1);
    num1%2==0 ? printf("The number is even") : printf("The number is odd") ;
    return 0;
}