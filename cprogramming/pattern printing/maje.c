#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number, write even number for pattern and odd number for gadha:");
    scanf("%d",&a);
    if(a%2==0)
    {
     for(int i=1;i<=a;i++)
      {
          for(int j=1;j<=i;j++)
          {
             for(int k=1;k<=j;k++)
             {
               printf("*");
             }
              printf("\n");
          }
           printf("\n");
      }
    }
    else
    {
        printf("\n\n\nYou are gadha write even number for pattern\n\n\n");
    }
    return 0;
}