#include<stdio.h>
int main()
{
    int a,b,c=1,d,e;
    printf("Enter a num:");
    scanf("%d",&a);
    b=1;
    while(b<=a)
    {
     c=c*b;
     b++;
    }
    printf("Fact is:%d",c);
    return 0;
}