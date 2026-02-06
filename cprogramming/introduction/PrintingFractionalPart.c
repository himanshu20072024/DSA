#include<stdio.h>
int main()
{
    float x;
    printf("enter a number:");
    scanf("%f",&x);
    int y;
    y=x;
    float z=x-y;
    printf("The fractional part is:%f",z);
    return 0;
}