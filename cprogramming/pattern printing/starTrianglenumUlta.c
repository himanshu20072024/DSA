#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%i",&a);
    for(int i=a;i!=0;i--)
    {
        for(int j=1;j<=i;j++)
        {
          printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}