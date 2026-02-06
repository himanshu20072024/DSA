#include<stdio.h>
int main()
{
    int a;
    printf("Enter a odd number:");
    scanf("%d",&a);
    int b=0;
    int c=a;
    for(int i=1;i<=a;i++)
    {
        if(i<=a/2)
        {
        for(int k=i;k<=a/2;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
        }
        else
        {
          {
          for(int k=1;k<=b;k++)
          {
              printf(" ");
          }
          for(int j=1;j<=c;j++)
          {
              printf("*");
          }
          printf("\n");
          }
          b++;
          c-=2;
        }
    }
    return 0;
}