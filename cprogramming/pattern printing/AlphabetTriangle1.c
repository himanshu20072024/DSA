#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        
        for(int j=1;j<=a-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
        int b=1;
        int c=k+64;
        char ch=(char)c;
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}