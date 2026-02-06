#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Enter number of rows of matrix 1:");
    scanf("%d",&a);
    printf("Enter number of column of matrix 1:");
    scanf("%d",&b);
    int mat1[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("Enter row %d , column %d for matrix 1:",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<a;j++)
        {
            printf("%d",mat1[j][i]);
        }
        printf("\n");
    }
    return 0;
}
