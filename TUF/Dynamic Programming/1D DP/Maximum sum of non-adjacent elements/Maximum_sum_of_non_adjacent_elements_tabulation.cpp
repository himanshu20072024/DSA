#include <bits/stdc++.h> 
int maximumNonAdjacentSum(vector<int> &nums){
    int n = nums.size();
    vector<int> dp(n, 0);
    dp[0] = nums[0];

    for(int i = 1; i < n; i++) {
        int take = nums[i];
        if(i > 1) {
            take += dp[i-2];
        }
        int notTake = 0 + dp[i-1];

        dp[i] = max(take, notTake);
    }

    return dp[n-1];
}
// time: O(N) where N is the size of the input array nums, since we are calculating the maximum sum for each index from 0 to N-1 once.
// space: O(N) for the dp array used for tabulation, since we are storing the maximum sum for each index from 0 to N-1 in the dp array.