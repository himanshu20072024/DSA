#include<stdio.h>
#include<string.h>
int main()
{
    char* str="Ideal Honestboy";
    printf("Adress 1:%p\n",&str);
    str="Sudhanshu Kumar";
    printf("Adress 2:%p",&str);
    return 0;
}