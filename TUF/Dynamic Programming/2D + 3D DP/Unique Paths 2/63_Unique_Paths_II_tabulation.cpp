class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        // If starting cell is blocked
        if(obstacleGrid[0][0] == 1) return 0;

        vector<vector<int>> dp(m, vector<int>(n, 0));
        dp[0][0] = 1;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {

                // If obstacle → no paths
                if(obstacleGrid[i][j] == 1) {
                    dp[i][j] = 0;
                    continue;
                }

                // Skip starting cell (already initialized)
                if(i == 0 && j == 0) continue;

                int top = 0, left = 0;

                if(i > 0) top = dp[i-1][j];
                if(j > 0) left = dp[i][j-1];

                dp[i][j] = top + left;
            }
        }

        return dp[m-1][n-1];
    }
};

// time: O(m*n) in the worst case, where m is the number of rows and n is the number of columns in the grid. This is because we are iterating through each cell in the grid once to fill the dp table.
// space: O(m*n) in the worst case, due to the dp table that we are using to store the number of unique paths to each cell. In the worst case, we may need to store results for all cells in the grid, which would require O(m*n) space.