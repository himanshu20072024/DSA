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
    int mat2[c][d];
    printf("Enter number of rows of matrix 2:");
    scanf("%d",&c);
    printf("Enter number of column of matrix 2:");
    scanf("%d",&d);
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<d;j++)
        {
            printf("Enter row %d and column %d for matrix 2:",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    }
    int matsum[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            matsum[i][j]=mat1[i][j]+mat2[i][j];
            printf("%d  ",matsum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
