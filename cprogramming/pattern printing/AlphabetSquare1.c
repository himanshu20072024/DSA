#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        int b=1;
        int c=b+64;
        char ch=(char)c;
        for(int j=1;j<=a;j++)
        {
            printf("%c",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}