#include <bits/stdc++.h> 
using namespace std;

// int f(int idx, int target, vector<int> &arr, vector<vector<int>> &dp) {
//     if(target == 0) return true;
//     if(idx == 0) return arr[0] == target;

//     if(dp[idx][target] != -1) return dp[idx][target];

//     int pick = false;
//     if(arr[idx] <= target)
//         pick = f(idx-1, target - arr[idx], arr, dp);

//     int notPick = f(idx-1, target, arr, dp);

//     return dp[idx][target] = (pick || notPick);
// }

// tabulation
bool subsetSumToK(int n, int k, vector<int> &arr) {
    // for each idx taking target from 0 to target
    vector<vector<bool>> dp(n, vector<bool>(k+1, 0));

    // write down the base case bro
    // for target = 0 its always possible 

    for(int i = 0; i < n; i++) dp[i][0] = true;
    dp[0][arr[0]] = true;

    for(int idx = 1; idx < n; idx++) {
        for(int target = 1; target <= k; target++) {
            // if not picking then till previous idx is it possible to create subset !
            int notPick = dp[idx-1][target];
            int pick = false;
            if(arr[idx] <= target) {
                pick = dp[idx-1][target - arr[idx]];
            }
            dp[idx][target] = (pick || notPick);
        }
    }

    // is it possible till last index to make subset sum equal to k !!
    return dp[n-1][k];




    
}