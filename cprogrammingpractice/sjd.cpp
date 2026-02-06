#include<iostream>
using namespace std;

void numberCrown(int n) {
    for(int i=1 ; i <= n ; i++)
    {
        for(int k=1 ; k <= i ; k++)
        {
            cout<<k<<" ";
        }
        for(int j=1 ; j<=2*(n-i) ; j++)
        {
            cout<<" ";
        }
        for(int a=i ; a >= 1 ; a++)
        {
            cout<<a<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    numberCrown(4);
}