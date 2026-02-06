// this one by using hashing
// time complexity is O(n)
// space complexity is O(n)

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    
    // taking array input
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // creating hash 
    vector<int> hash(n+1, 0);
    for(int i = 0; i < n; i++)
    {
        hash[arr[i]] = 1;
    }

    // printing numbers not present 
    for(int i = 1; i <= n; i++)
    {
        if(hash[i] != 1) cout << i;
    }
    return 0;
}