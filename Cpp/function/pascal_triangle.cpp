#include<iostream>
using namespace std;

int factorial(int x)
{
    int fact = 1;
    for(int i = 2 ; i <= x ; i++)
        fact *= i;
    return fact;
}

int combination(int x, int y)
{
    return factorial(x)/(factorial(y)*factorial(x-y));
}

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j <= n - i +1 ; j++)
        {
            cout<<" ";
        }
        for(int j = 0 ; j <= i ; j++)
        {
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
}