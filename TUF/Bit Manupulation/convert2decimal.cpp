// time complexity is O(len)
// space complexity is O(1)
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string n;
    cin >> n;
    int len = n.size();
    int p2 = 1;
    int sum = 0;
    for(int i = len - 1; i >= 0; i--)
    {
        if(n[i] == '1')
        {
            sum += p2;
        }
        p2 = p2*2;
    }
    cout << sum;
    return 0;
}