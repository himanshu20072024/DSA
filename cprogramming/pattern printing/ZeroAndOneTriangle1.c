#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        if(i%2==0)
        b=0;
        else
        b=1;
        for(int j=1;j<=i;j++)
        {
           printf("%d ",b);
           if(b==1)
           b=0;
           else
           b=1;
        }
        printf("\n");
    }
    return 0;
}