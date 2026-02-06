#include<iostream>
using namespace std;

void swap(int x, int y)
{
    cout<<&x<<endl; // different from the main x in main function
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
    cout<<&x<<endl;  // from this one 
    swap(x,y);
    cout<<x<<" "<<y;
}
