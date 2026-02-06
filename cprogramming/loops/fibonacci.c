#include<stdio.h>
int main()
{
    int a,b=1,c=1,sum=1;
    printf("Enter a number:");
    scanf("%i",&a);
    for(int i=1;i<=a-2;i++)
    {
        sum=b+c;
        b=c;
        c=sum;
    }
    printf("The %d fibonacci number is %d ",a,sum);

    return 0;
}