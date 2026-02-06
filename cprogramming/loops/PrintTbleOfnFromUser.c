#include<stdio.h>
int main()
{
    int i;
    printf("Enter the number whose table you want: ");
    scanf("%i",&i);
    for(int h=i;h<=10*i;h=h+1)
    {
        if(h%i==0)
        printf("%d ",h);
    }
    return 0;
}