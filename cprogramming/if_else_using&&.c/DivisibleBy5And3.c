#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%i",x);
    if(x%5==0 && x%3==0) //can be done like if a number is divisible by 3 and 5 then it is divisible by 15 also so it can be replaced by a single condition
      {
        printf("number is divisible by 5 and 3");
      }
    else
      {
        printf("not divisible by 3 and 5");
      }
    return 0;
}