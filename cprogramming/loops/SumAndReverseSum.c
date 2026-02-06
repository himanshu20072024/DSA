#include<stdio.h>
int main()
{
    int a,b,d,c,totalsum,origional;
    printf("Enter your number:");
    scanf("%d",&a);
    c=0;
    origional=a;
    while(a!=0)
    {
        c=c*10;
        d=a%10;
        a=a/10;
        c=c+(d);
    }
     a=origional;
       totalsum=origional+c;
    printf("Sum of number with its reverse is %d",totalsum);

    return 0;
}