class Solution {
private:
    int f(int row, int col, vector<vector<int>>& grid, vector<vector<int>>& dp) {
        if(row == 0 and col == 0) return grid[row][col];
        if(row < 0 || col < 0) return 1e9;

        if(dp[row][col] != -1) return dp[row][col];
        int top = f(row-1, col, grid, dp);
        int left = f(row, col-1, grid, dp);

        return dp[row][col] = grid[row][col] + min(top, left);
    }

public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));

        return f(m-1, n-1, grid, dp);
    }
};
// time: O(m*n), as we are filling a 2D dp array of size m*n, where m is the number of rows and n is the number of columns in the input grid. Each cell in the dp array is computed in constant time O(1) by taking the minimum of the top and left cells and adding the current cell value from the grid. The recursive function is called at most once for each cell in the grid, leading to a total of m*n calls.        
// space: O(m*n), as we are using a 2D dp array of size m*n to store the minimum path sums for each cell in the grid. Additionally, the space used by the input grid is not considered in the space complexity analysis, as it is given as part of the input and does not depend on the size of the dp array. The maximum depth of the recursion can be m+n-2 (when we are at the bottom-right corner and we need to move all the way up to the top-left corner), which contributes to the space complexity as well.    