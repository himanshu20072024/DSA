#include<bits/stdc++.h>
using namespace std;

// 1,72
// 2,36
// 3,24
// 4,18
// 6,12
// 8,9
// 9,8
// reppetition starts

void checkPrime(int n)
{
    if(n < 2)
    {
        cout << "not prime";
        return;
    }
    int cnt = 0;
    for(int i = 1 ; i*i <= n ; i++)
    {
        if(n % i == 0)
        {
            cnt++;
            if((n / i) != i)
                cnt++;
        }
    }
    if(cnt == 2) cout << "prime";
    else cout << "not prime";
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    checkPrime(n);
}