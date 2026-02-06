#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the number:");
    scanf("%i",&a);
    b=0;
    while(a>0)
    {
        b=b*10;
        b=b+(a%10);
        a=a/10;
    }
    printf("Reverse number is:%d",b);

    return 0;
}