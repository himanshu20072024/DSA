// optimal time complexity is o(3N)
// space complexity is O(N)

class Solution {
public:
    int longestConsecutive(vector<int>& arr) 
    {
        unordered_set<int>st;
        int n = arr.size();

        if(n == 0) return 0;
        for(int i = 0; i < n; i++)
        {
            st.emplace(arr[i]);
        }   
        int cnt = 1;
        int largest = 1;
        for(auto it : st)
        {
            if(st.find(it - 1) == st.end())
            {
                cnt = 1;
                int x = it;
                while(st.find(x+1) != st.end())
                {
                    x += 1 ;
                    cnt += 1;
                }
                largest = max(largest, cnt);
            }
        }
        return largest;
    }
};