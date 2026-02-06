#include<iostream>
using namespace std;

void swap(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x,y;
    cout<<"Enter 1st value : ";
    cin>>x;
    cout<<"Enter 2nd value : ";
    cin>>y;
    swap(x,y);
    cout<<x<<" "<<y;
}
