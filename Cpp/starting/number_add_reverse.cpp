#include<iostream>
using namespace std;

int main()
{
    int n,_duplicate_n;
    cout<<"Enter n : ";
    cin>>n;
    _duplicate_n = n;
    int sum = 0;
    int i;
    int reverse = 0;
    while(n != 0)
    {
        i = n % 10;
        n /= 10;
        reverse = reverse*10 + i;
    }
    cout<<"Sum of Number and revrse is : "<<_duplicate_n+reverse;
}