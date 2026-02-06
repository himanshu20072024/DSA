#include<bits/stdc++.h>
using namespace std;

void printNTime(int a, int b)
{
    if(b < 1) return;
    cout << "Ideal" << " ";
    printNTime(1, b-1);
}

int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    printNTime(1, n);
}