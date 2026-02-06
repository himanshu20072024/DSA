#include<stdio.h>
int main()
{
    int a;
    printf("Enter any odd number:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        if(i<(a+1)/2)
        {
         for(int j=1;j<=(a-1)/2;j++)
         { 
           printf(" ");
         }
           printf("*\n");
        }
        else if(i==(a+1)/2)
          {
            for(int k=1;k<=a;k++)
            {
                printf("*");
            }
            printf("\n");
          }
        else
        {
            for(int l=1;l<=(a-1)/2;l++)
            {
               printf(" ");
            }
            printf("*\n");
        }
    }
    return 0;
}