#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter number of rows:");
    scanf("%d",&a);
    printf("Enter number of column:");
    scanf("%d",&b);
    int max,index_row=0,index_column=0;
    int mat1[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
        printf("\n");
    }
    max=mat1[0][0];
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
            if(max<mat1[i][j])
            {
                max=mat1[i][j];
                index_row=i;
                index_column=j;
            }
        }
    }
    printf("Index is (%d,%d)\n",index_row,index_column);
    printf("The max is :%d",max);
    return 0;
}