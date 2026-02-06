#include<stdio.h>
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

    typedef struct godpokemon
    {
        legendarypokemon god;
        char specialattack[100];
        int extradamage;
    } godpokemon;

    legendarypokemon mewtwo;
    mewtwo.normal.attack=325;
    strcpy(mewtwo.normal.name,"mewtwo");  // aise lega unki normal chizo ko sabme common hai a
    strcpy(mewtwo.ability,"pressure");

    godpokemon ideal;
    ideal.extradamage=3200;
    strcpy(ideal.god.normal.name,"ideal");  // nesting ke andar nesting 
    strcpy(ideal.specialattack,"Remove enemy existence");


    return 0;
}