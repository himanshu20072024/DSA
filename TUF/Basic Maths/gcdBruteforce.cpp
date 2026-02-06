#include<bits/stdc++.h>
using namespace std;
// this is bruteforce method and taking linear time complexity

// time complexity is O(min(n1, n2)) for both functions of GCD
void findGCD(int n1, int n2)
{
    int gcd = 1;
    for(int i = 1 ; i <= min(n1, n2) ; i++)
    {
        if(n1 % i == 0 and n2 % i ==0)
        gcd = i;
    }
    cout << "GCD is :" << gcd;
}

// we can also start from the min of n1, n2 
// but time complexity will still be same 
void findGCD1(int n1, int n2)
{
    int gcd = 1;
    for(int i = min(n1, n2) ; i >= 1 ; i--)
    {
        if(n1 % i == 0 and n2 % i ==0)
        {
            gcd = i;
            break;
        }
    }
    cout << "GCD is :" << gcd;
}

int main()
{
    int n1, n2;
    cout << "enter n1: ";
    cin >> n1;
    cout << "enter n2: ";
    cin >> n2;
    findGCD(n1, n2);
    cout<<"\n";
    findGCD1(n1, n2);
}