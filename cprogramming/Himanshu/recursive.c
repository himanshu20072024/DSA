#include<stdio.h>
void print(int x)
{
    if(x>100) return;
    printf("%d\n",x);
    print(x+1);
}
int main()
{
    print(1);
    return 0;
}