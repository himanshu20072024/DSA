#include<stdio.h>
int main()
{
    int a;
    printf("Enter  number of rows:");
    scanf("%d",&a);
    int b;
    printf("Enter number of columns:");
    scanf("%d",&b);
    int arr[a][b],arr1[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<a;j++)
        {
            arr1[j][i]=arr[i][j];
        }
    }
    printf("The transpose of matrix is:");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}