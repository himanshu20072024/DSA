#include<stdio.h>
int main()
{
    struct ThePlayers
    {
        int TownHall;
        int ArcherTower;
        int Canon;
        int Mortar;
    };

    // jaise ham input lete the pahle waise hi same isme bhi lenge ham bas dot operator ko use karenge isme
    struct ThePlayers Ideal;
    printf("Enter townhall of Ideal:");
    scanf("%d",&Ideal.TownHall);
    printf("The townhall of Ideal is:%d",Ideal.TownHall);
    

    return 0;
}