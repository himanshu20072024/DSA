#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Enter a number:");
    scanf("%d",&a);
    int sum=0;
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        sum=sum+b;
    }
    printf("Sum of digits is:%d",sum);
    return 0;
}z