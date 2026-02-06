#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter breadth of rectangle:");
    scanf("%d",&a);
    printf("Enter length of reactangle:");
    scanf("%d",&b);
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            if(j==1  || j==b || i==1 || i==a)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}