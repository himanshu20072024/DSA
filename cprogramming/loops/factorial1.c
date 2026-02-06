#include<stdio.h>
int main()
{
 int a,b,c,fact=1;
 printf("Enter a number;");
 scanf("%d",&a);
 b=1;
 for(c=1;c<=a;c++)
 {
   fact=fact*c;
 }
 printf("The factorial is:%d",fact);

return 0;
}
