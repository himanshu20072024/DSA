#include<stdio.h>
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    return;
}
void address(int* x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main()
{
    int a;
    printf("Enter num1:");
    scanf("%d",&a);
    int b;
    printf("ennter num2:");
    scanf("%d",&b);
    swap(a,b);
    printf("A is %d and b is %d\n\n",a,b);
    address(&a,&b);
    printf("A is %d and b is %d",a,b);
    return 0;
}