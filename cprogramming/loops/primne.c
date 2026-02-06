#include<stdio.h>
int main()
{
    int a,b=0,c;
    printf("Enter a number:");
    scanf("%d",&a);
     if(a<=1)
    {
        printf("Enter integer greater than 1");
        return 0;
    }
    for(c=2;c<=a/2;c++)
    {
     if(a%c==0)
     {
       b=1;
       break;
     }
    }
    if(b==1)
    {
      printf("Number is not prime");
    }
    else
    {
      printf("Number is prime number");
    }

    return 0;
}