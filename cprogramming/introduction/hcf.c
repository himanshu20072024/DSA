#include <stdio.h>

int compute_gcd(int a, int b) 
{
    int temp;
    
    if (b > a) 
    {
        temp = a;
        a = b;
        b = temp;
    }
    while (b != 0) 
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;  
}
int main()
 {
    int num1, num2, gcd;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    gcd = compute_gcd(num1, num2);
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd);
    return 0;
}