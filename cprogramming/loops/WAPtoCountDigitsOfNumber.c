#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number");
    scanf("%d",&a);
    int i=0;
    while(a!=0)
    {
        a=a/10;
        i++;
    }
    printf("The number of digits %d:",i);
    return 0;
}