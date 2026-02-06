#include<stdio.h>
int main()
{
    float principal,rate,time,si; //4 dabbe create ho gai hai
    printf("enter principal:");
    scanf("%f",&principal);
    printf("enter rate :");
    scanf("%f",&rate);
    printf("enter time:");
    scanf("%f",&time);
    si=(principal*rate*time)/100;
    printf("Your simple interest is:%f",si);
    return 0;
}