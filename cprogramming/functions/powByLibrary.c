#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    int c=pow(a,b);
    printf("%i",c);
    return 0;
}