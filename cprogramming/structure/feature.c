#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct Ideal
    {
        char name[15];
        int exp;
    } Ideal;

    Ideal A,B,C;

    strcpy(A.name,"Ideal Honestboy");
    A.exp=290;

    // now we want to copy this all things to B and C then this is the feature of structure 

    B=A;  // deep copy bani hai you can check 
    C=A;  // same here deep copy bani hai 
     
    // agar tujhe sab kuch same rkhna ho and bas naam change karna ho toh B=A karne ke baad {strcpy(B.name,"name")} kar dio  

    printf("%s",B.name);  // you can check it is copied if you want to check if it is deep ofr shallow check youself !!
    return 0;
}