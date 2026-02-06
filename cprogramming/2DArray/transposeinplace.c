#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number of rows and column:");
    scanf("%d",&a);
    int mat[a][a];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            scanf("%d",&mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            printf("%d",mat[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<a;i++)
    {
        for(int j=i;j<a;j++)
        {
            int temp;
            temp=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=temp;
        }
        printf("\n");
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}