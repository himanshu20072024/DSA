#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    for(int i=1;i<a;i++)
    printf("%d",i);
    int b=a;
    for(int j=b;j>0;j--)
    printf("%d",j);
    printf("\n");
    for(int p=1;p<=a-1;p++)
    {
        int b=1;
        for(b;b<=a-p;b++)
        {
            printf("%d",b);
        }
        int c=1;
        for(c;c<=p*2-1;c++)
        {
            printf(" ");
        }
        int d=a-p;
        for(d;d>0;d--)
        {
            printf("%d",d);
        }
        printf("\n");
    }
    return 0;
}