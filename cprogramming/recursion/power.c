#include<stdio.h>
int power(int x,int y)
{
    if(y==0) return 1;
    int z=x*power(x,y-1); 
    return z;  
}
int main()
{
    int a;
    printf("Enter base:");
    scanf("%d",&a);
    int b;
    printf("Enter power:");
    scanf("%d",&b);
    int himanshu = power(a,b);
    printf("%d",himanshu);
    return 0;
}