#include<bits/stdc++.h>
using namespace std;

int add(int n, int sum)
{
    if(n < 1) return sum;
    add(n-1, sum+n);
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    cout << add(n, 0);
}