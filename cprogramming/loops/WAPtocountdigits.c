#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter the number:");
    scanf("%d",&a);
    for(i=0;a>0;i++)
    {
    a=a/10;
    }
    printf(" the number of digits is:%d\n\n",i);
    return 0;
}