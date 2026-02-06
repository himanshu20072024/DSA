#include<bits/stdc++.h>
using namespace std;

void printN_to_1(int a, int b)
{
    if(b < a) return;
    cout << b << " ";
    printN_to_1(a, b-1);
}

int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    printN_to_1(1, n);
}