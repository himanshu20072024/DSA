#include<iostream>   // some error is here fix it soon means tomorrow 7 may 2025 
using namespace std;

int power(int x, int y)
{
    if(y == 1) return x;
    //if(y % 2 == 0)
        return (power(x, y/2) * power(x, y/2));
}

int main()
{
    int a;
    cout<<"Enter a : ";
    cin>>a;
    int b;
    cout<<"Enter b : ";
    cin>>b;
    cout<<power(a, b);
}