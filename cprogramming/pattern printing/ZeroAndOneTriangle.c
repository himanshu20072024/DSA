#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    int b=1;
    int c=0;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            printf("1 ");
            else
            printf("0 ");
            
        }
        printf("\n");
    }
    return 0;
}