#include <bits/stdc++.h> 

int f(int idx, vector<int>& nums, vector<int>& dp) {
    if(idx == 0) return nums[0];
    if(idx < 0) return 0;

    if(dp[idx] != -1) return dp[idx];
    int pick = nums[idx] + f(idx-2, nums, dp);
    int notPick = 0 + f(idx-1, nums, dp);

    return dp[idx] =  max(pick, notPick);
}

int maximumNonAdjacentSum(vector<int> &nums){
    int n = nums.size();

    vector<int> dp(n, -1);
    return f(n-1, nums, dp);
}

time: O(N) where N is the size of the input array nums, since we are calculating the maximum sum for each index from 0 to N-1 once.
space: O(N) for the dp array used for memoization, and O(N) for the recursive call stack in the worst case, leading to a total space complexity of O(N).    