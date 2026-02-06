#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i= 1 ; i <= n ; i++)
    {
        int helper = 0;
        for(int j = 1 ; j <= i ; j++)
        {
            if(i%2 == 0)
            {
                cout<<(helper + i)%2<<" ";
                helper++;
            }
            else
            {
                cout<<(i + helper)%2<<" ";
                helper++;
            }
        }
        cout<<endl;
    }
}