#include<stdio.h>
int fibo(int x)
{
    if(x==1 || x==2) return 1;
    int ans=fibo(x-1)+fibo(x-2);
    return ans;
}
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    int himanshu = fibo(a);
    printf("%d",himanshu);
    return 0;
}