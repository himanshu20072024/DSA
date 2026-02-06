#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter from where you want even number");
    scanf("%d",&a);
    for(int b=1;b<=a;b++)
    {
        if(b%2!=0)
      {
        continue;
      }
       printf("%d ",b);
    }
    return 0;
}