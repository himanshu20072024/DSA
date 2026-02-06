#include<stdio.h>   // isko ek baar dekhio sahi se nhi karwaya 
int main()
{
    struct ThePlayers
    {
        int TownHall;
        int ArcherTower;
        int Canon;
        int Mortar;
    };

    struct LegendaryThePlayers
    {
        int exp;
        struct ThePlayers A;
    };
    struct ThePlayers Ideal;
    printf("Enter townhall of Ideal:");
    scanf("%d",&Ideal.TownHall);
    printf("The townhall of Ideal is:%d",Ideal.TownHall);

    // taking input for legendarytheplayers
    //struct ThePlayers Ideal;
    printf("Enter townhall of Ideal:");
    scanf("%d",&Ideal.TownHall);
    printf("The townhall of Ideal is:%d",Ideal.TownHall);
    

    return 0;
}