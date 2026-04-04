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


// this one is space Optimised !!
bool subsetSumToK(int n, int k, vector<int> &arr) {
    
    vector<bool> prev(k+1, 0), curr(k+1, 0);

    // initialize base conditions
    prev[0] = true;
    prev[arr[0]] = true;
    curr[0] = true;

    // for(int i = 0; i < n; i++) prev[0] = true; // no need ig
    // dp[0][arr[0]] = true;

    for(int idx = 1; idx < n; idx++) {
        for(int target = 1; target <= k; target++) {
            int notPick = prev[target]; // if not picked in curr were we getting sum = k till prev
            int pick = false;
            if(arr[idx] <= target) {
                pick = prev[target - arr[idx]]; // if picked then were we getting sum = k-arr[idx] till prev 
            }
            curr[target] = (pick || notPick);
        }
        prev = curr;
    }

    
    return prev[k];
}