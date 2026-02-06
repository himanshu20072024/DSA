#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the number:");
    scanf("%d",&a);
    c=a;
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        printf("%d",b);
    }
     printf(" is reverse of number");
    return 0;
}