#include <bits/stdc++.h> 
using namespace std;

int f(int idx, int target, vector<int> &arr, vector<vector<int>> &dp) {
    if(target == 0) return true;
    if(idx == 0) return arr[0] == target;

    if(dp[idx][target] != -1) return dp[idx][target];

    int pick = false;
    if(arr[idx] <= target)
        pick = f(idx-1, target - arr[idx], arr, dp);

    int notPick = f(idx-1, target, arr, dp);

    return dp[idx][target] = (pick || notPick);
}

bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<vector<int>> dp(n, vector<int>(k+1, -1));
    return f(n-1, k, arr, dp);
}

// | Component       | Complexity   |
// | --------------- | ------------ |
// | Time            | **O(n × k)** |
// | DP Space        | **O(n × k)** |
// | Recursion Stack | **O(n)**     |
// | **Total Space** | **O(n × k)** |
