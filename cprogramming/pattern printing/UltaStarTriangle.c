#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%i",&a);
    for(int i=a;i!=0;i--)
    {
        for(int j=i;j>0;j--)
        {
          printf(" * ");
        }
        printf("\n\n");
    }
    return 0;
}