// time and space complexity are O(1)

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int i ;
    cin >> i;
    if((n & (1 << i)) != 0) cout << "set";
    else cout << "not set";
    return 0;
}