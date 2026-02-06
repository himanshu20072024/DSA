#include<stdio.h>
int sum(int x)
{
    if(x==1) return 1;
    int ans = x + sum(x-1);
    return ans;
}
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    int himanshu = sum(a);
    printf("%d",himanshu);
    return 0;
}