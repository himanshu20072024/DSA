#include<stdio.h>
int main()
{
    typedef struct ThePlayers
    {
        int TownHall;
        int ArcherTower;
        int Canon;
        int Mortar;
    } ThePlayers;     // dekh isme tune struct ThePlayers ka naam ThePlayers rakh dia ab jab bhi tujhe naya player add karna hoga toh har baar struct aage likhne ki zaroorat nhi hai 

    ThePlayers Ideal;
    printf("Enter townhall of Ideal:");
    scanf("%d",&Ideal.TownHall);
    printf("The townhall of Ideal is:%d",Ideal.TownHall);
    

    return 0;
}