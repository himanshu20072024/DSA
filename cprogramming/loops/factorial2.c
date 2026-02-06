#include<stdio.h>
int main()
{
    int a;
    printf("Enter your number:");
    scanf("%d",&a);
    int fact=1,i=1;
    while(i<=a)
    {
        fact=fact*i;
        i++;
    }
    printf("Fact is %d",fact);
    return 0;
}