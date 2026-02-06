#include<stdio.h>
int main()
{
    int a;
    printf("Enter rows of 1st matrix:");
    scanf("%d",&a);
    int b;
    printf("Enter column of 1st matrix:");
    scanf("%d",&b);
    int arr1[a][b];
    printf("Enter the elements of matrix 1:\n");
    // entering matrix 1 elementrs
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    int c;
    printf("Enter rows of matrix 2:");
    scanf("%d",&c);
    int d;
    printf("Enter column of matrix 2:");
    scanf("%i",&d);
    int arr2[c][d];
    printf("Enter elements of matrix 2:");
    // entering matrix 2 elements
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<d;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    int arr[a][d];
    if(b!=c)
    {
        printf("Matrix multiplication not possible");
        return 0;
    }
    else
    {
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<d;j++)
            {
                arr[i][j]=0;
            }
        }
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<d;j++)
            {
                for(int k=0;k<b;k++)
                {
                    arr[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
    }
    printf("Matrix multiplication is:\n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<d;j++)
        {
            printf("%i ",arr[i][j]);
        }
        printf("\n");
    }
return 0;
}