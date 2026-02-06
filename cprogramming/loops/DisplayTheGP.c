#include<stdio.h>
int main()
{
    int a,c=1;
    printf("Enter a number: ");
    scanf("%i",&a);
    for(int b=1;b<=a;b++)
    {
        printf("%i ",c);
        c=c*2;

    }
    return 0;
}