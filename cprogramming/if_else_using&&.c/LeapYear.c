#include<stdio.h>
int main()
{
    int x;
    printf("Enter a year:");
    scanf("%d",&x);
    if(x%4==0)
     {
        printf("it is leap year");
     }
    else
     {
        printf("year is not leap year");
     }
    return 0;
}