#include<stdio.h>
#include<string.h>
int main()
{
    struct IdealPlayers
    {
        char name[50];
        int TownHall;
        int ArcherTower;
        int Canon;
        int Mortar;
        char Opinion;
    } IdealHonestboy,Himanshu,PlayerUnknown;
     
    struct legendaryIdealPlayers
    {
        int experience;
        struct IdealHonestboy;
    }
    IdealHonestboy.TownHall=3;
    IdealHonestboy.Canon=3;
    IdealHonestboy.Mortar=3;
    IdealHonestboy.ArcherTower=3;
    IdealHonestboy.Opinion='A';
    IdealPlayers.Mortar=3
    strcpy(IdealHonestboy.name,"IdealHonestboy");  //  Most Imoportasnt must see Hay see here seeee ehre man jyst see here once 
    printf("%d\n %d \n%d \n%d \n %c \n %s",IdealHonestboy.Canon,IdealHonestboy.Mortar,IdealHonestboy.ArcherTower,IdealHonestboy.TownHall,IdealHonestboy.Opinion,IdealHonestboy.name);

    return 0;
}