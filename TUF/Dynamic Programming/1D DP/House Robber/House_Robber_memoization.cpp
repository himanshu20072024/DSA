class Solution {
private:
    int f(int idx, vector<int>& dp, vector<int>& nums) {
        if(idx == 0) return nums[0];
        if(idx < 0) return 0;

        if(dp[idx] != -1) return dp[idx];
        int rob = nums[idx] + f(idx-2, dp, nums);
        int notRob = 0 + f(idx-1, dp, nums);

        return dp[idx] = max(rob, notRob);
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);

        return f(n-1, dp, nums);
    }
};

// time: O(n)
// space: O(n) + O(n) for recursion stack