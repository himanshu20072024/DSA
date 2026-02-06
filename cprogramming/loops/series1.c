#include<stdio.h>
int main()
{
    int a,c=0,d=0;
    printf("Enter the number:");
    scanf("%d",&a);
    for(int b=1;b<=a;b++)
    {
        if(b%2==0)
        {
          c=c-b;
        }
        else
        d=d+b;
    }
    printf("%d is sum of series 1-2+3-4+5-6......",d+c);
    
    return 0;
}