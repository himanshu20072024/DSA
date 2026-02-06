#include<bits/stdc++.h>
using namespace std;

// time complexity is nearly about 2^n some less but exponential growth see recursion tree everytime function caleed 2 times 
int fibonacci(int n)
{
    if(n <= 1) return n;
    int last = fibonacci(n-1);
    int slast = fibonacci(n-2);
    return last+slast;
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    cout<< fibonacci(n);
}