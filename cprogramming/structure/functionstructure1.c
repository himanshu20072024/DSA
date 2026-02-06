#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon
    {
        int attack;
        int defence;
        char name[20];
    } pokemon;
void fun(pokemon x)
{
    printf("%d",x.attack);
    return;
}
void change(pokemon y) // yha ek naya y bana jo pikachu ki copy thi uski attack defence change hue but not of pikachu 
{
    y.attack=20;
    y.defence=20;
    return;
}
int main()
{
    pokemon pikachu;
    pikachu.attack=320;
    pikachu.defence=100;
    change(pikachu);  // as you can see the output means it is paas by value not paas by reference
    printf("%d\n",pikachu.attack);   
    printf("%d\n",pikachu.defence);
    fun(pikachu);

    return 0;
}