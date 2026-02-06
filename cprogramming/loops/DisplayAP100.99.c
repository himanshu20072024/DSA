#include<stdio.h>
int main()
{
    int a,c=100;
    printf("Enter a number:");
    scanf("%i",&a);
    for(int b=1;b<=a;b=b+1)
    {
        printf("%i ",c);
        c=c-3;
    }

    return 0;
}