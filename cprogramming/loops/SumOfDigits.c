#include<stdio.h>
int main()
{
    int a,b,c,d,count;
    printf("Enter a number:");
    scanf("%d",&a);
    count = 0 ;
    while(a!=0)
    {
      a=a/10;
      count++;
    }
    printf("The number of digits in number is :%d",count);
    return 0;
}