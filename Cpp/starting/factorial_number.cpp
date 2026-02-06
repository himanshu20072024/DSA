#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int factorial = 1;
    for(int i = 2 ; i <= n ; i++)
    {
        factorial = factorial*i;
    }
    cout<<"Factorial is : "<<factorial;
}