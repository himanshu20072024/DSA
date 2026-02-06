#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct 
    {
        char name[50];
        int damage;
        char grade;
        int power;
    } pokemon;

    pokemon arr[3];  // arr[0],arr[1],arr[2] iss array me 3 pokemon ke details store ho sakte hai

    strcpy(arr[0].name,"pikachu");  // ye jo tune khud di hai values ye tu loop lagake user se le sakta tha easily do it once 
    arr[0].power=10;
    arr[0].damage=102;
    arr[0].grade='B';

    strcpy(arr[1].name,"charizard");
    arr[1].power=20;
    arr[1].damage=001;
    arr[1].grade='C';

    strcpy(arr[2].name,"mewtwo");
    arr[2].power=1000;
    arr[2].damage=23456;
    arr[2].grade='S';

    for(int i=0;i<3;i++)
    {
        printf("%s\n",arr[i].name);
        printf("Power is : %d\n",arr[i].power);
        printf("Grade is : %c\n",arr[i].grade);
        printf("Damage is : %d\n",arr[i].damage);
    }

    return 0;
}