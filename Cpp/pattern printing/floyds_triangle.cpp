#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int data = 1;
    for(int i= 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            cout<<data<<" ";
            data += 1;
        }
        cout<<endl;
    }
}