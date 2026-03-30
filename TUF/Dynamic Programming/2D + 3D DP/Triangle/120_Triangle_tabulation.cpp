class Solution {

public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        int m = triangle[n-1].size();

        vector<vector<int>> dp(n, vector<int>(n, 0));

        for(int i = 0; i < n; i++) {
            dp[n-1][i] = triangle[n-1][i];
        }

        for(int i = n-2; i >= 0; i--) {
            for(int j = i; j >= 0; j--) {
                int down = dp[i+1][j];
                int downRight = dp[i+1][j+1];
                dp[i][j] = triangle[i][j] + min(down, downRight);
            }
        }

        return dp[0][0];
    }
};

// time: O(n*m) where n is the number of rows in the triangle and m is the number of elements in the last row
// space: O(n*m) for the dp array