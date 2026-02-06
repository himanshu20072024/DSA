#include<bits/stdc++.h>
using namespace std;

int _xor(vector<int> &arr)
{
    int XOR = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        XOR ^= arr[i];
    }
    return XOR;
}

int main() 
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // best way use xor and time complexity will be O(1) and space complexity will be O(1)
    int result = _xor(arr);
    cout << "The element appearing once is : " << result;

    // better way using hash
    // time complexity is O(N)
    // space complexity is O()
    auto it = max_element(arr.begin(), arr.end());
    int max_num = *it;
    vector<int> hash(max_num + 1, 0);
    for(int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    for(int i = 1; i < max_num + 1; i++)
    {
        if(hash[i] == 1) cout << i << " ";
    }

    // better than hash because what if inputs are negatives use map instead of hash
    // time complexity is O(N/2 + 1)  if we use map instead of unordered map then time complexity will be N*log(M) where M is number of elements    

    unordered_map<long long, int> mpp;  
    for(int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    for(auto it : mpp)
    {
        if(it.second == 1) cout << it.first << " ";
    }

    // worst way using time complexity of O(N^2) space complexity O(1)
    for(int i = 0; i < n; i++)
    {
        int num = arr[i];
        int ptr = 0;
        for(int j = 0; j < n; j++)
        {
            if(arr[j] == num and i != j)
                ptr++;
        }
        if(ptr == 0)
        {
            cout << num << " ";
        } 
    }
    

}