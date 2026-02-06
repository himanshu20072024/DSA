#include <bits/stdc++.h>
using namespace std;

void print1_to_N(int n)
{
    if(n == 0) return; // base case
    print1_to_N(n - 1); // first print lower numbers
    cout << n << " ";   // then print current number
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    print1_to_N(n);
}
