#include <stdio.h>
int main()
{
    int a,remainder,reversenum;
    printf("Enter number :");
    scanf("%i",&a);
    while(a!=0);
    {
        reversenum=a*10;
        remainder=a%10;
        reversenum=reversenum+remainder;
        a=reversenum/10;
    }
    printf("reverse number is %d",reversenum);
   return 0;
}