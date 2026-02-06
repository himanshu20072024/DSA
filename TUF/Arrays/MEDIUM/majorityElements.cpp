// this is moore's voting algorithm
// time complexity is O(N)
// space complexity is O(1)

class Solution {
public:
    int majorityElement(vector<int>& arr) 
    {
        int cnt = 0;
        int n;
        for(int i = 0; i < arr.size(); i++)
        {
            if(cnt == 0)
            {
                n = arr[i];
                cnt++;
            }
            else if(arr[i] == n)
                cnt++;
            else
                cnt--;
        }
        return n;
    }
};





// this one is better solution
// time complexity is O(N*logN) + O(N) or O(N) + O(n) depending on which map we are using if we use unordered map then in 
// best and average case schenario the time complexity will be O(n) + O(n) but in worst case it will be O(N^2)
// but in map the time complexity will be O(N*logN)
// space complexity is O(N) because we are using a hashmap

class Solution {
public:
    int majorityElement(vector<int>& arr) 
    {
        map<int, int>mpp;
        for(int i = 0; i < arr.size(); i++)
        {
            mpp[arr[i]]++;
        }

        for(auto it : mpp)
        {
            if(it.second > arr.size()/2)
            {
                return it.first;
                break;
            }
        }
        return -1;
    }
};

// this one is the bruteforce method
// time complexity is O(n^2)

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        int cnt = 0 ;
        for(int j = 0; j < n; j++)
        {
            if(arr[j] == arr[i]) cnt++;
        }
        if(cnt > n/2) return cnt;
    }
    return 0;
}