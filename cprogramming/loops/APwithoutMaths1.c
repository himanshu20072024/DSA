#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a number: ");
    scanf("%i",&a);
    b=3;
    for(int d=1;d<=a;d=d+1) // yaha iska kaam bas AP ko jitna number tumne dia hai utne times chalana hai ek baar padh samajh jaiga DRY RUN kar
    {
       printf("%d ",b);
       b=b+3;
    }
    return 0;
}