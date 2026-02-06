// its wwrong just doing this question without understanding question properly 

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) 
    {
        int n = nums.size();
        unordered_map<int, int> ngl;
        stack<int> st;
        vector<int> ans;
        ngl[nums[n-1]] = -1;
        for(int i = 0; i < n-1; i++)
        {
            if(nums[i] > nums[n-1]) 
            {
                ngl[nums[n-1]] = nums[i];
                break;
            }
        }
        for(int i = n-2; i >= 0; i--)
        {
            if(i == n-2)
            {
                if(nums[n-1] > nums[i])
                {
                    ngl[nums[i]] = nums[n-1];
                }
                else
                {
                    ngl[nums[i]] = -1;
                }
            }
            while(!st.empty() && nums[i] >= st.top())
            {
                st.pop();
            }
            ngl[nums[i]] = st.empty() ? -1 : st.top();
            st.push(nums[i]);
        }    
        for(int i = 0; i < n; i++)
        {
            ans.push_back(ngl[i]);
        }
        return ans;
    }
};