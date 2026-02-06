#include<stdio.h>
int main()
{
    int a,b=3;
    printf("Enter a number:");
    scanf("%d",&a);
    for(int c=1;c<=a;c++)
    {
        printf("%i ",b);
        b=b*4;

    }
    return 0;
}