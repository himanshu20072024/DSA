#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number:");
    scanf("%i",&a);
    for(b=a;b<=a*10;b=b+a)
    printf("%d\n",b);
    return 0;
}
