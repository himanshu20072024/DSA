#include<stdio.h>
int main()
{
    int a,b,c,d=1;
    printf("Enter a number:");
    scanf("%i",&a);
    if(a>0)
    {
        for(c=a;c>0;c--)
        d=d*c;
        printf("Factorial is:%d",d);
    }
    if(a<0)
     printf("Invalid input");
    else if(a=0)
    printf("Fact is 1");
    return 0;
}