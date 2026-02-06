// optimal solution with O(1) time complexity 
// space complexity is O(1)

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    if(n % 4 == 1) cout << 1;
    if(n % 4 == 2) cout << n+1;
    if(n % 4 == 3) cout << 0;
    if(n % 4 == 0) cout << n;
    return 0;
}