#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Ideal Honestboy";
    char* ptr=str;
    *ptr='H';
    printf("%s",ptr);
    return 0;
}