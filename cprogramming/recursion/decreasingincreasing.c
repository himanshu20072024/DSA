#include<stdio.h>
void decrease(int x)
{
    if(x==0) return ;
    {
        printf("%d\n",x);
        decrease(x-1);
        printf("%d\n",x); 
    }
}
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%i",&a);
    decrease(a);
    return 0;
}