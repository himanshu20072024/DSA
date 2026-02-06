#include<stdio.h>
int main()
{
    int a,b,sum=0,position=1;
    printf("Enter a number");
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        if(position%2==0)
        {
          sum=sum+b;
        }
        position++;
    }
    printf("Sum of digitts at odd place is %d",sum);
    return 0;
}