#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    int b;
    int c=1;
    int d=1;
    for(int z=1;z<=a*2-1;z++)
    {
    d=z+64;
    char ch=(char)d;
    printf("%c",ch);
    }
    printf("\n");
    for(int i=a-1;i!=0;i--)
    {
        int d=1;
       for(int j=1;j<=i;j++)
       {
           char ch1=(char)(d+64);
           printf("%c",ch1);
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
        char ch2=(char)d+64;
        printf("%c",ch2);
        d++;
       }
       printf("\n");
    }
    return 0;
}
