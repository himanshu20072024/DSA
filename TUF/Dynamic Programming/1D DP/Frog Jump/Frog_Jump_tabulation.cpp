#include <bits/stdc++.h> 

int frogJump(int n, vector<int> &heights)
{
    vector<int> dp(n+1, 0);
    dp[0] = 0;
    for(int i = 1; i < n; i++) {
        int sj = dp[i-1] + abs(heights[i] - heights[i-1]);
        int lj = INT_MAX;
        if(i > 1)
        lj = dp[i-2] + abs(heights[i] - heights[i-2]);
        dp[i] = min(sj, lj);
    }

    return dp[n-1];
}

// time: O(n)
// space: O(n) for dp array, can be optimized to O(1) by using two variables to store the last two states instead of the entire dp array.