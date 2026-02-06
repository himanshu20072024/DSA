// time complexity is O(N)
// space complexity is O(N) in worst case

class Solution {
public:
    vector<int> leaders(vector<int>& arr) 
    {
        int maxi = INT_MIN;
        int n = arr.size();
        vector<int> leaders;
        for(int i = n - 1; i >= 0; i--)
        {
            if(arr[i] > maxi)
            {
                maxi = max(maxi, arr[i]);
                leaders.emplace_back(arr[i]);
            }
        }
        reverse(leaders.begin(), leaders.end());
        return leaders;
    }
};