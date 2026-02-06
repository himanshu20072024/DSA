#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%i",&a);
    int b=a;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
          printf(" * ");
        }
        printf("\n\n");
        b--;
    }
    return 0;
}