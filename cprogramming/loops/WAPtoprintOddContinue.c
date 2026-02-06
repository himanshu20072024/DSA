#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number you want to print odd numbers:\n");
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        if(b%2==0)
        {
            continue;
        }
        printf("%d ",b);
    }

    return 0;
}