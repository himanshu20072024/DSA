class Solution {
private:
    int f(int row, int col, vector<vector<int>>& obstacleGrid, vector<vector<int>> &dp) {
        if(obstacleGrid[row][col] == 1) return 0;
        if(row == 0 && col == 0) {
            return 1;
        }
        if(dp[row][col] != -1) return dp[row][col];
        int top = 0;
        int left = 0;
        if(row-1 >= 0 && obstacleGrid[row-1][col] == 0) {
            top = f(row-1, col, obstacleGrid, dp);
        }
        if(col-1 >= 0 && obstacleGrid[row][col-1] == 0) {
            left = f(row, col-1, obstacleGrid, dp);
        }

        return dp[row][col] = top+left;


    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));

        return f(m-1, n-1, obstacleGrid, dp);
    }
};

// time: O(m*n) in the worst case, where m is the number of rows and n is the number of columns in the grid. This is because we are using memoization to store previously computed results, which allows us to avoid redundant calculations and reduces the time complexity to linear with respect to the size of the grid.
// space: O(m*n) in the worst case, due to the memoization table (dp) that we are using to store previously computed results. In the worst case, we may need to store results for all cells in the grid, which would require O(m*n) space. Additionally, the recursive call stack may also contribute to space complexity, but it is limited to O(m+n) in the worst case due to the nature of the recursion.