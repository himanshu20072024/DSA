#include<stdio.h>
int main()
{
    float l,b,p,a;
    printf("enter the length: ");
    scanf("%f",&l);
    printf("enter the breadth:");
    scanf("%f",&b);
    p=2*(l+b);
    a=l*b;
    if(p>a)
      {
        printf("perimeter is greater than area");
      }
    if(a>p)
      {
        printf("area is greater than perimeter");
      }
    return 0;
}