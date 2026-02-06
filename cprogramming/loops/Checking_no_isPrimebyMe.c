#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    int z=0;
    if(a<=1)
   {
       printf("No. is not a prime number");
       return 0;
   }
   for(int b=2;b<a;b++)
   {
      if(a%b==0)
     {
      z=1;
      break;
     }
   }
   if(z==1)
   printf("number is not prime number\n");
   else
   printf("Number is  prime\n");

   return 0;
}