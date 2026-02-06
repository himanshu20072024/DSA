#include<bits/stdc++.h>
using namespace std;

// this is the most efficient code runs in 
// time complexity of O(log min(n1, n2))
void findGCD(int n1, int  n2)
{
    while(n1 > 0 and n2 >0)
    {
        if(n1 > n2) n1 = n1 % n2;
        else n2 = n2 % n1;
    }
    if(n1 == 0) cout << "GCD is:" << n2;
        else cout << "GCD is:" << n1;
}

int main()
{
    int n1, n2;
    cout << "Enter n1 :";
    cin >> n1;
    cout << "Enter n2 :";
    cin >> n2;
    findGCD(n1, n2);
}