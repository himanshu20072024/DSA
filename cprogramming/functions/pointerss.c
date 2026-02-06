#include<stdio.h>// // change the value of a and see the magic ;
int main()
{
    int a=85;
    int b=5;
    int* y=&a;
    *y=5; // a is changed here 
    int* x=&a;
    printf("%p\n",&a);
    printf("%i\n",&b);
    printf("%i\n",*x); // *x matlab x ke andar jiska address likha hua hai us address ke andar jo likha hai use print kar 
    printf("%p\n",x); //x ke andar jiska address hai wo print hua
    printf("%p",&x); // address of x is printed
    return 0;
}