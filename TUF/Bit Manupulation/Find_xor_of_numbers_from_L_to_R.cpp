// time complexity is O(N) best solution is of O(1)  see that also
// space complexity is O(1)
// see notes in notebook written as XOR and its modulo by 4

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int XOR = 0;
    for(int i = 1; i <= n; i++)
    {
        XOR = XOR ^ i;
    }
    cout << XOR;
    return 0;
}