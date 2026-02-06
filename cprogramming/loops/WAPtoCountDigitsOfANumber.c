#include<stdio.h>
int main()
{
    int a,b,c,d,count,sum;
    printf("Enter a number:");
    scanf("%d",&a);
    count = 0 ;
    sum=0;
    while(a!=0)
    {
      c=a%10;
      a=a/10;
      sum=sum+c;
    }
     
      
    printf("The sum of digits in number is :%d",sum);
    return 0;
}