#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    int b=a-1;
    for(int i=1;i<=a;i++)
    {
        int c=i-1;
        for(int m=1;m<=b;m++)
        {
            printf(" ");
        }
        b--;
        for(int j=1;j<=i;j++)
        {
          printf("%d",j);
        }
        for(int k=1;k<=i-1;k++)
        {
            printf("%d",c);
            c--;
        }
        printf("\n");
    }
    return 0;
}