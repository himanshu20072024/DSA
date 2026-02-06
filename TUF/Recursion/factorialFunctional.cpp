#include<bits/stdc++.h>
using namespace std;

// time complexity is O(N)
// space complexity is O(N)
int factorial(int n)
{
    if(n == 0) return 1;
    return n*factorial(n-1);
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    cout << factorial(n);
}