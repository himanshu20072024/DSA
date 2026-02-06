#include<stdio.h>
int main()
{
    int a,b,i,c,d=0,e=0;
    printf("Enter the number:");
    scanf("%d",&a);
    for(i=0;a>0;i++)
    {
        e=d*10;
        c=a%10;
        a=a/10;
        d=e+c;
    }
    printf(" the reverse of digits is:%d\n\n",d);
    return 0;
}