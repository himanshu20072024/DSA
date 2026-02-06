#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon
    {
        int attack;
        char name[20];
    } pokemon;
void fun(pokemon x)
{
    printf("%d",x.attack);
    return;
}
int main()
{
    pokemon pikachu;
    pikachu.attack=320;
    fun(pikachu);

    return 0;
}