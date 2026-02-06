#include<stdio.h>
void swap(int* x,int* y)
{
    int m;
    m=*x;
    *x=*y;
    *y=m;
    return;
}
int main()
{
    int a;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    int b;
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("%d \n %d",a,b);
    return 0;
}