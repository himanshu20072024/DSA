#include<bits/stdc++.h>
using namespace std;

// time and space complexity is O(n/2)
bool f(int i, string str)
{
    if(i >= str.size()/2) return true;
    if(str[i] != str[str.size()-i-1]) return false;
    return f(i+1, str);
}

int main()
{
    string str;
    cout << "Enter string : ";
    cin >> str;
    cout << f(0, str);
}