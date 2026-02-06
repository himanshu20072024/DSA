#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter first side of triangle:");
    scanf("%d",&a);
    printf("enter second side of triangle:");
    scanf("%d",&b);
    printf("enter third side of triangle:");
    scanf("%d",&c);
    if((a+b)>c && (b+c)>a && (c+a)>b)
    {
        printf("these 3 can be the sides of a triangle");
    }
    else
    {
        printf("these are noyt the sides of a triangle");
    }
    return 0;
}