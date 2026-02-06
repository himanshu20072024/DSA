#include<stdio.h>
int main()
{
    int a,b,i,j;
    printf("Enter num of horizontal lines:");
    scanf("%d",&a);
    printf("Enter num of verticle lines:");
    scanf("%d",&b);
    for(i=1;i<=a;i++)
       {
        for(j=1;j<=b;j++)
        printf("*");
        printf("\n");
       }

     
    return 0;
}