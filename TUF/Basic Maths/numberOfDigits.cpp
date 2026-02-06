#include<bits/stdc++.h>
using namespace std;

// time complexity will be O(log10(n))
// remember whenever number of iterations are done by division again and agian then time complexity will be logarithm of the number 
// by which we are dividing

int main()
{
    int n;
    cout << "Enter digit : ";
    cin >> n;
    int i = (int)((log10(n)) + 1);
    cout << "number of digits in number is : " << i;
}