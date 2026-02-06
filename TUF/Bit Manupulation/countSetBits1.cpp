#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int cnt = 0;
    while(n > 1)
    {
        if(n & 1) cnt++; // or cnt += (n&1) // we are able to do it because for a off number right most bit is always 1 
        n = n >> 1;
    }
    if(n == 1) cnt++;
    cout << cnt;
    return 0;
}