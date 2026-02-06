#include<stdio.h>
int main()
{
    //taking 1st matrix 
    int r1,c1;
    printf("Enter number of rows for 1st matrix:");
    scanf("%d",&r1);
    printf("Enter number of columns for 1st matrix:");
    scanf("%d",&c1);
    printf("Ennter values in matrix 1:");
    int mat1[r1][c1];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
        printf("\n");
    }
    // printing 1st matrix
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("%d",mat1[i][j]);
        }
        printf("\n");
    }
    // taking 2nd matrix
    int r2,c2;
    printf("Enter number of rows for 2nd matrix:");
    scanf("%d",&r2);
    printf("Enter number of columns for 2nd matrix:");
    scanf("%d",&c2);
    printf("Enter values in matrix 2:");
    int mat2[r2][c2];
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
        printf("\n");
    }
    int res[r1][c2];
    // printing 2nd matrix
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d",mat2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    // checking if matrix multilication possible or not
    if(c1!=r2)
    {
        printf("Matrix multiplication not possible");
        return 0;
    }
    {
        if(c1==r2)
        {
            // multiplication of matrix
            // initialization matrix to 0
            for(int i=0;i<r1;i++)
            {
                for(int j=0;j<c2;j++)
                {
                     res[i][j]=0;
                }
            }
            // i row of 1st matrix * j column of second matrix
            for(int i=0;i<r1;i++)
            {
                for(int j=0;j<c2;j++)
                {
                     for(int k=0;k<r2;k++)
                     {
                        res[i][j] += mat1[i][k]*mat2[k][j];
                     }
                }
            }
        }
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                printf("%d ",res[i][j]);
            }
             printf("\n");
        }
    }
    return 0;
}