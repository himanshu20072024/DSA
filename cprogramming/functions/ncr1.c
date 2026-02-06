#include<stdio.h>
int fact(int x)
{
     int fact=1;
    for(int i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int a,b;
    printf("Enter n:");
    scanf("%d",&a);
    printf("Enter r:");
    scanf("%d",&b);
    int ncr=fact(a)/(fact(b)*fact(a-b));
    printf("The ncr is %i",ncr);
    return 0;
}
