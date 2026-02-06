#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    int b=a/2;
    int c=1;
    int d=b+1;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=c;k++)
        {
            printf("*");
        }
        if(i<d)
        {
            b--;
            c+=2;
        }
        else
        {
        b++;
        c-=2;
        }
        printf("\n");
    }

    return 0;
}