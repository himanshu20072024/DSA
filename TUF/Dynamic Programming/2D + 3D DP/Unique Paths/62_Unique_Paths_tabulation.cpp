class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(i == 0 && j == 0) dp[i][j] = 1;
                else {
                    int up = 0, left = 0;
                    if(i > 0) up = dp[i-1][j];
                    if(j > 0) left = dp[i][j-1];
                    dp[i][j] = up + left;
                }
            }
        }

        return dp[m-1][n-1];
    }
};

// time: O(m*n) - we fill an m by n table, so the time complexity is proportional to the number of cells in the table.
// space: O(m*n) - we use a 2D dp table of size m by n to store the number of unique paths to each cell, leading to a space complexity of O(m*n).