#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter 4 numbers:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a<b)
    {
        if(a<c)
        {
            if(a<d)
            printf("Smallest number is:%d",a);
            else
            printf("Smallest number is:%d",d);
        }
        else
        {
        if(c<d)
        printf("Smallest number is:%d",c);
        else
        printf("Smallest number is:%d",d);
        }
    }
    else
    {
        if(b<c)
        {
            if(b<d)
            printf("Smallest number is:%d",b);
            else
            printf("Smallest number is:%d",d);
        }
        else
        {
        if(c<d)
        printf("Smallest number is:%d",c);
        else
        printf("Smallest number is:%d",d);
        }
    }
    return 0;
}