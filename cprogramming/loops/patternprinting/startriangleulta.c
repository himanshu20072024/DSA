#include<stdio.h>
int main()
{
    int a,b,i,j;
    printf("Enter num of horizontal lines:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
       {
        for(j=a;j>=i;j--)
        printf("*");
        printf("\n");
       }

     
    return 0;
}