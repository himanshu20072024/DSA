#include <stdio.h>
int main() 
{
    int a;
    printf("Enter no. of lines: ");
    scanf("%i", &a);
    
    for (int b = 1; b <= a; b++)
    {
        for (int c = a; c > b; c--)
          {
            printf(" ");
          }
        for (int d = 1; d <= (2 * b - 1); d++) 
          {
            printf("%d", 2 * d - 1 );
          }
        printf("\n");
    }
return 0;
}
