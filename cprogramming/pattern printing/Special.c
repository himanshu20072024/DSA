#include<stdio.h>// Just 2 hour tried to do it by yourself but unfortunately was not able to do it but printed 1/4th of the pattern but now you can print compete pattern bye going now
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    for(int i=1;i<=2*a-1;i++)
    {
        for(int j=1;j<=2*a-1;j++)
        if(i<j)
    {
        if(i<2*a-1-j)
        {
            if(i<2*a-1-i)
            printf("%d",i);
            else
            printf("%d",2*a-1-i);
        }
        else
        {
        if(2*a-1-j<2*a-1-i)
        printf("%d",2*a-1-j);
        else
        printf("%d",2*a-1-i);
        }
    }
    else
    {
        if(j<2*a-1-j)
        {
            if(j<2*a-1-i)
            printf("%d",j);
            else
            printf("%d",2*a-1-i);
        }
        else
        {
        if(2*a-1-j<2*a-1-i)
        printf("%d",2*a-1-j);
        else
        printf("%d",2*a-1-i);
        }
    }
    printf("\n");
        return 0;
    }
}