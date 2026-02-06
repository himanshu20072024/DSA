#include<stdio.h>
int main()
{
    int mat[3][2]={1,2,3,4,5,6},mat1[2][3];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            //printf("%d",mat[j][i]);
            mat1[i][j]=mat[j][i];
        }
        printf("\n");
    }
        for(int i=0;i<2;i++)
           {
               for(int j=0;j<3;j++)
               {
                printf("%d ",mat1[i][j]);
               }
               printf("\n");
           }
    return 0;
}