#include<bits/stdc++.h>
using namespace std;

void print1_to_N(int a, int b)
{
    if(a > b) return;
    cout << a << " ";
    print1_to_N(a+1, b);
}

int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    print1_to_N(1, n);
}