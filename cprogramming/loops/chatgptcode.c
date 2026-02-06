#include <stdio.h>

int main() 
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int z = 0;
    if (a == 1) 
    {
        printf("The number is neither prime nor composite\n");
        return 0;
    }
    for (int b = 2; b <= a ; b++) 
    {
        if (a % b == 0) 
        {
            z = 1;
            break;
        }
    }
    if (z == 1) 
    {
        printf("The number is composite\n");
    } 
    else 
    {
        printf("The number is prime\n");
    }

    return 0;
}
