#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    int b;
    int c=1;
    for(int z=1;z<=a*2-1;z++)
    printf("%d",z);
    printf("\n");
    for(int i=a-1;i!=0;i--)
    {
        int d=1;
       for(int j=1;j<=i;j++)
       {
           printf("%i",d);
           d++;
       }
       for(int k=1;k<=2*c-1;k++)
       {
        printf(" ");
        d++;
       }
       c++;
       for(int m=1;m<=i;m++)
       {
        printf("%i",d);
        d++;
       }
       printf("\n");
    }
    return 0;
}
