#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    int b=a-1;
    for(int i=1;i<=a;i++)
    {
        int c=i-1;
        for(int m=1;m<=a-i;m++)  // spaces ke lie ek loop
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++) // number triangle
        {
          char ch=(char)(j+64);
          printf("%c",ch);
        }
        for(int k=1;k<=i-1;k++)  // hamne dimaag laggaya
        {
            char ch1=(char)(c+64);
            printf("%c",ch1);
            c--;
        }
        printf("\n");
    }
    return 0;
}