#include<stdio.h>
int main()
{
    int a=20,b=10;
    {
    int a=0;
    int c=a+b;
    printf("a=%d b=%d c=%d\n",a,b,c);
    }
    b=a;
    printf("a=%d b=%d\n",a,b);

    return 0;
}