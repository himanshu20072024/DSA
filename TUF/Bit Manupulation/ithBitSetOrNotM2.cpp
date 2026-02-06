// time and space complexity are O(1)

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n,i;
    cin >> n >> i;
    if((n >> i) & 1) cout << "set";
    else cout << "notset";
    return 0;
}