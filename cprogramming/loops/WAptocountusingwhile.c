#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter the number:");
    scanf("%d",&a);
    i=0;
    while(a>0)
    {
    a=a/10;
    i++;
    }
    printf(" the number of digits is:%d\n\n",i);
    return 0;
}