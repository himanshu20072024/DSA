#include<stdio.h>
int main()
{
    int i,c;
    printf("Enter a number: ");
    scanf("%i",&i);
    c=4;
    for(int d=1;d<=i;d=d+1)
    {
        printf("%d ",c);
        c=c+3;
    }
    return 0;
}