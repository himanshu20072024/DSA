#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int sum = 0;
    int i;
    while(n > 0)
    {
        i = n % 10;
        n = n / 10;
        sum += i;
    }
    cout<<"sum of digits are : "<<sum;
}