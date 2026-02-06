#include<stdio.h>
int main()
{
    int a;
    printf("ENter a number:");
    scanf("%d",&a);
    int z=0;
    if(a==1)
    {
     printf("The number is neither prime nor composite");
     return 0;
    }
    for(int b=2;b<=a-1;b=b+1)
    {
      if(a%b==0)
      z=1;
      break;
    }
    if(z==1)
    printf("The number is composite");
    else 
    printf("The number is prime");
    return 0;
}