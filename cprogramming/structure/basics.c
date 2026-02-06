#include<stdio.h>
int main()
{
    struct IdealPlayers
    {
        int TownHall;
        int ArcherTower;
        int Canon;
        int Mortar;
    };
    struct IdealPlayers IdealHonestboy,Himanshu,PlayerUnknown;  // ye ya toh aise declare kar ya phir jake basics1.c ko dekh usme kaise declare kia hai 
    IdealHonestboy.TownHall=3;
    IdealHonestboy.Canon=3;
    IdealHonestboy.Mortar=3;
    IdealHonestboy.ArcherTower=3;
    printf("%d\n %d \n%d \n%d \n",IdealHonestboy.Canon,IdealHonestboy.Mortar,IdealHonestboy.ArcherTower,IdealHonestboy.TownHall);

    return 0;
}