#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int cnt = 0;
    while(n > 1)
    {
        if(n % 2 == 1) cnt++;
        n /= 2;
    }
    if(n == 1) cnt++;
    cout << cnt;
    return 0;
}