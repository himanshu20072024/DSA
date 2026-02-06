#include<stdio.h>
int main()
{
    char ch[50];
    scanf("%[^\n]s",ch);
    for(int i=1;i<200;i++)
    {
        printf("%s\n",ch);
    }
    return 0;
}