#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter number of line");
    scanf("%i",&a);
    for(b=1;b<=a;b++){
     {
        for(c=a;c>b;c--){
        printf(" ");}
     }
     {
        printf("%d",2*b-1);
     }
        printf("\n");}
    return 0;
}