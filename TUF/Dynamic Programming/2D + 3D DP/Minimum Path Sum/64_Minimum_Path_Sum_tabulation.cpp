class Solution {
private:

public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0));
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(i == 0 && j == 0) dp[i][j] = grid[i][j];
                else {
                    int top = 1e9, left  = 1e9;
                    if(i > 0) {
                        top = dp[i-1][j];
                    }
                    if(j > 0) {
                        left = dp[i][j-1];
                    }
                    dp[i][j] = grid[i][j] + min(top, left);
                }
            }
        }

        return dp[m-1][n-1];
    }
};

// time: O(m*n), as we are filling a 2D dp array of size m*n, where m is the number of rows and n is the number of columns in the input grid. Each cell in the dp array is computed in constant time O(1) by taking the minimum of the top and left cells and adding the current cell value from the grid.
// space: O(m*n), as we are using a 2D dp array of size m*n to store the minimum path sums for each cell in the grid. The space used by the input grid is not considered in the space complexity analysis, as it is given as part of the input and does not depend on the size of the dp array. The maximum depth of the recursion can be m+n-2 (when we are at the bottom-right corner and we need to move all the way up to the top-left corner), which contributes to the space complexity as well.