// using XOR learn XOR in bitwise manupulation
// time complexity is O(n)
// space complexity is O(1)


#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    int XOR1 = 0, XOR2 = 0;
    for(int i = 1; i <= n; i++)
    {
        XOR1 = XOR1 ^ i;
        if(i < n)
        {
            int x;
            cin >> x;
            XOR2 = XOR2 ^ x;
        }
    }

    int result = XOR1 ^ XOR2;
    cout << "Missing number using XOR we found is : " << result;
    return 0;
}