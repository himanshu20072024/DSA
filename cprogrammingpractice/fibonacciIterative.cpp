#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    int i1 = 0, i2 = 1;
    int i3;
    for(int i = 0 ; i <= n ; i++)
    {
        i3 = i1 + i2;
        i1 = i2;
        i2 = i3;
    }
    cout << i3;
}