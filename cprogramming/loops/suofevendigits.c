#include<stdio.h>
int main()
{
    int a,b,i,c,d=0,e=0;
    printf("Enter the number:");
    scanf("%d",&a);
    for(i=0;a>0;i++)
    {
        c=a%10;
        a=a/10;
        if(i%2==0)
        {
          d=d+c;
        }
    }
    printf(" the sum of odd digits is:%d\n\n",d);
    return 0;
}