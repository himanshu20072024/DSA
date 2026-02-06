#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    for(int b=1;b<=a;b++)
    {
        if(b%2==0)
        {
          continue;
        }
        printf("%d\n",b);
    }
    return 0;
}