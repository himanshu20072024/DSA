#include<stdio.h>
int main()
{
    int a,c;
    printf("Enter a number:");
    scanf("%d",&a);
    c=1;
    for(int b=1;b<=a;b++)
    {
      c=c*b;
    }
    printf("Fact is:%i",c);
    return 0;
}