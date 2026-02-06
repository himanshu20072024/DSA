#include<stdio.h>
int main()
{
    int x,y;
    printf("enter a number:");
    scanf("%i",&x);
    if(x<0)
     {
        x=x * (-1);
     }
     printf("The absolute value is :%d",x);
     
      return 0;
}