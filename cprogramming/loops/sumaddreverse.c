#include<stdio.h>
int main()
{
    int a,b,c,d,e=0,f,g;
    printf("Enter the number : ");
    scanf("%d",&a);
    b=a;
for(;a!=0;)
{
  e=e*10;
  e=e+a%10;
  a=a/10;
}
  g=e+b;
  printf("sum with reverse is:%d",g);


    return 0;
}