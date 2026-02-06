#include<stdio.h>
int main()
{
    float a,c=100;
    printf("Enter a number:");
    scanf("%f",&a);
    for(int b=1;b<=a;b++)
    {
        printf("%f",c);
        c=c/2;
    }
    return 0;
}