#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("enter the number:");
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
      c=1;
      for(d=1;d<=b;d++)
      {
        c=c*d;
      }
      printf("%i\n",c);
    }
    return 0;
    