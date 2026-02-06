// time complexity is O(n)
// space complexity is O(1)
// uses difference method to find the missing element


#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int actualSum = 0;
    for (int i = 0; i < n-1; i++)
    {
        int num;
        cin >> num;
        actualSum += num;
    }

    int realSum = n*(n+1)/2;

    cout << "Missing number is : " << realSum - actualSum;


    return 0;
}