#include<stdio.h>
int main()
{
    int x;
    printf("enter a number:");
    scanf("%i",&x);
    if(x>99 && x<1000)
    {
        printf("it is a 3 digit number");
    }
    else
    {
        printf("it is not a 3 digit number");
    }
    return 0;
}