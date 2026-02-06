#include<stdio.h>
int main()
{
   int a;
   printf("Enter a number");
   scanf("%d",&a);
   for(int b=2;b<=a-1;b++)
    if(a%b==0)
     {
         printf("number is not prime");
         break;
         return 0;
}
     }
    else
    printf("Number is prime");