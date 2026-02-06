#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    for(int i=i;i<=a;i++)
    {
        for(int j=1;j<=a-i;j++)
        {
            printf(" ");
        }
        int b=1;
        for(int k=1;k<=2*i-1;k++)
        {
        int c=b+64;
        char ch=(char)c;
        printf("%c",ch);
        b++;
        }
        printf("\n");
    }
    return 0;
}