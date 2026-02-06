#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of terms you want for this AP: ");
    scanf("%d",&n);
    for(int h=4;h<=3*n+1;h=h+3)
    {
        printf("%i ",h);
    }
    return 0;
}