class Solution {
private:
    int function(int n, vector<int>& dp) {
        if(dp[n] != -1) {
            return dp[n];
        }
        if(n == 0 || n == 1) {
            return 1;
        } 
        return dp[n] = function(n-1, dp) + function(n-2, dp);
    }
public:
    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        return function(n, dp);
    }
};

time:O(n)
space:O(n)