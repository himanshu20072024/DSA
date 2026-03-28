#include <bits/stdc++.h> 
int frogJump(int n, int k, vector<int> &heights)
{
    vector<int> dp(n, 0);
    
    for(int i = 1; i < n; i++) {
        int minSteps = INT_MAX;
        for(int j = 1; j <= k; j++) {
            if(i-j >= 0) {
                int jump = dp[i-j] + abs(heights[i] - heights[i-j]);
                minSteps = min(minSteps, jump);
            }
        }
        dp[i] = minSteps;
    }

    return dp[n-1];
}

// time : O(n*k) where n is the number of stairs and k is the maximum jump distance
// space : O(n) for the dp array