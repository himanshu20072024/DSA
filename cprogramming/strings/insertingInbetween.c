#include<stdio.h>
#include<string.h>
int main()
{
    char A[20]="IdealHonestBoy";
    printf("%s",A);
    for(int i=14;i<=3;i--)
    {
        A[i+1]=A[i];
    }
    A[2]='S';
    printf("\n%s",A);
    return 0;
}