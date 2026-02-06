#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
     // for(int j=1;j<=a-i;j++)
       //{
       // printf(" ");  inke aage ka // hata ke dekh mast wala triangle aa jaiga so see carefully
      // }
       for(int k=1;k<=i;k++)
       {
        printf("*");
       }
      printf("\n");
    }
    return 0;
}