#include<stdio.h>
#include<string.h>
int main()
{
    char* A="Ideal Honestboy";
    char* B;
    B=A;
    A="Sudhanshu Kumar";
    printf("%s\n",A);
    printf("%s\n",B);   // deep copy bani hai using pointers string
    
}