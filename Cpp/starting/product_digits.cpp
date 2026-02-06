#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int product = 1;
    int i;
    while(n > 0)
    {
        i = n % 10;
        n = n / 10;
        product *= i;
    }
    cout<<"product of digits are : "<<product;
}