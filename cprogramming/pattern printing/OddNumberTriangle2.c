#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    for(int i=1;i<=a;i=i+2)
    {
        for(int j=1;j<=i;j=j+2)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}