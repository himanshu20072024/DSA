// time complexity is O(log base 2 N)
// space complexity is also O(log base 2 N) because the number of times loops runs the number of integer we stores
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n; 
    cin >> n;
    if(n == 0) 
    {
        cout << 0;
        return 0;
    }
    string s = "";
    while(n > 0)
    {
        if(n % 2 == 1) s += '1';
        else s += '0';
        n /= 2;
    }
    reverse(s.begin(), s.end());
    cout << s;
    return 0;
}