#include<iostream>
using namespace std;

void print(int x, int y)
{
    if(x == (y+1))  return;
    cout<<x<<" ";
    print(x+1, y);
}

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    print(1, n);
}