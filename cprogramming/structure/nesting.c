#include<stdio.h>  // nesting ke andar nesting ke lie nesting1.c dekh 
#include<string.h>
#include<stdbool.h>
int main()
{
    typedef struct pokemon
    {
        int attack;
        char name[20];
    } pokemon;

    typedef struct legendarypokemon
    {
        pokemon normal;   // nesting aise hogi dekh 
        char ability[20];
    } legendarypokemon;

    legendarypokemon mewtwo;
    mewtwo.normal.attack=325;
    strcpy(mewtwo.normal.name,"mewtwo");  // aise lega unki normal chizo ko sabme common hai a
    strcpy(mewtwo.ability,"pressure");

    return 0;
}