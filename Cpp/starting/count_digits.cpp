#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int i = 0;
    while(n > 0)
    {
        n = n / 10;
        i++;
    }
    cout<<"number of digits are : "<<i;
}