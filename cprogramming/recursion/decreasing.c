#include<stdio.h>
int decrease(int x)
{
    if(x>=1)
    {
        
        decrease(x-1);
        printf("%d\n",x); // isko decerease ke uper rakh de decreasing wala ho jaiga and yha hai toh increasing walahj ahi
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