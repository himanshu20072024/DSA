#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Ideal Honestboy";
    char* P=str; // P is a shallow copy
    str[0]='S';
    printf("%s",P);  // This means it is shallow copy 
    return 0;
}