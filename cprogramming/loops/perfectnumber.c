#include<stdio.h>
int main()
{
    int a,b=0;
    printf("Enter the number to check:");
    scanf("%d",&a);
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
        b=b+i;
    }
    if(a==b)
    printf("It is a perfect number");
    else
    printf("It is not a perfect number");
    return 0;
}