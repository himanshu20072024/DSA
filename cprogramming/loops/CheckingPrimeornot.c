#include<stdio.h>
int main()
{
    printf("Enter the number:");
    int a,c;
    scanf("%i",&a);
    c=0;
    for(int b=2;b<=a-1;b++)
     {
        if(a%b==0)
         {
         c=1;
         break;
         }
     }
    if(c==1)
    printf("Number is not prime");
    else
    printf("Number is prime");
    return 0;
}