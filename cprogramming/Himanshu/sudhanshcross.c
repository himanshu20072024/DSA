// *...*
// .*.*.
// ..*..
// .*.*.
// *...*
#include<stdio.h>
int main()
{
    int a;
    printf("Enter number:");
    scanf("%d",&a);
    int b=a;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            if(i==j || i+j==a+1)printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}












// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter a number:");
//     scanf("%d",&a);
//     for(int i=1;i<=a/2+1;i++)
//     {
//         for(int j=2;j<=i;j++)
//         {
//             printf(" ");
//         }
//         printf("*\n");
//         for(int k=a/2+1;k>=1;k--)
//         {
//             printf(" ");
//         }
//     }
//     return 0;
// }