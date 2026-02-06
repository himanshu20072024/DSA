#include<stdio.h>
int main()
{
    char ch='k';
    int x=(int)ch;
    printf("%d\n",x);
    char ch1[50],ch2[50];
    //gets(ch1);  // whole statement can be taken as input here 
    scanf("%s",ch1);  // scanf stops reading when it encounters space thats why only first word will be considred.
    printf("\nyour input was :%s\n",ch1);
    puts(ch1);
    //gets(ch2); // isse ham entire sentence ko input le sakte hai 
    scanf("%[^\n]s",ch2); // second way to get complete oytput but looks weird
    printf("\nyour input was :%s",ch2);

    return 0;
}

// isme 12 number wali line se input nhi le rha kyunki uper jab scanf kia tha us time kuch bufer leftover bach gaya tha jo yaha leke unexpected output de rha hai baaki mujhe bhi samajh nhi aaya 