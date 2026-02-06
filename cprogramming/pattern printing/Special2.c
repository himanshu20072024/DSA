#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a number:");
    scanf("%d",&a);
    for(int i=1;i<=a*2-1;i++)
    {
        for(int j=1;j<=a*2-1;j++)
        {
            b=i;
            if(i>a)
            b=2*a-i;
            c=j;
            if(j>a)
            c=2*a-j;
            if(b<c)
            printf("%d",b);
            else
            printf("%d",c);
        }
        printf("\n");
    }
    return 0;
}