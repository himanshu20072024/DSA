#include<stdio.h>
int main()
{
    int a,c=0,d=0,e,f,g;
    printf("Enter the number:");
    scanf("%d",&a);
    g=a;
    if(a%2==0)
    a=-(a/2);
    else
    a=a-1;
    a=-(a/2);
    a=g+a;
    
    printf("%d is sum of series 1-2+3-4+5-6......",a);
    
    return 0;
}