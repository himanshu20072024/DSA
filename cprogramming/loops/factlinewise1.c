#include<stdio.h>
int main()
{
    int a,b=1;
    printf("Enter a number:");
    scanf("%d",&a);
    for(int c=1;c<=a;c++)
    {
        b=c*b;
        printf("%d\n",b);
    }
    return 0;
}