#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter anumber:");
    scanf("%d",&a);
    c=0;
    for(b=2;b<=a/2;b++)
    {
         if(a%b==0)
         c=1;
         break;
    }
    if(c==1)
    printf("Number is composite");
    else
    printf("Number is prime");

    return 0;
}