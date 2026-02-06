#include<stdio.h>
int main()
{
    int a,b=1,c=1,sum=1;
    printf("Enter a number:");
    scanf("%i",&a);
    printf("The 1 fibonacci number is 1\n");
    printf("The 2 fibonacci number is 1\n");
    for(int i=1;i<=a-2;i++)
    {
        sum=b+c;
        b=c;
        c=sum;
        printf("The %d fibonacci number is %d \n",i+2,sum);
    }
    return 0;
}