#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter number of rows:");
    scanf("%d",&a);
    printf("Enter number of column:");
    scanf("%d",&b);
    int sum=0;
    int mat1[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            sum += mat1[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}