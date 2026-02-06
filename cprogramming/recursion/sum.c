#include<stdio.h>
void sum(int x,int y)
{
    if(x==0) 
    {
        printf("%d",y);
        return;
    }
    sum(x-1,y+x);
}
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    sum(a,0);
    return 0;
}