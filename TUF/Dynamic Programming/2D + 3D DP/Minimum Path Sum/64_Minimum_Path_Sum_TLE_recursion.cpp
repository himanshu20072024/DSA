class Solution {
    int minSum = INT_MAX;
private:
    void f(int row, int col, vector<vector<int>>& grid, int sum) {
        if(row == 0 && col == 0) {
            sum += grid[row][col];
            dp[row][col] = sum;
            minSum = min(minSum, sum);
            return;
        }

        sum += grid[row][col];
        if(row-1 >= 0) {
            f(row-1, col, grid, sum);
        }
        if(col-1 >= 0) {
            f(row, col-1, grid, sum);
        }
    }

public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        dp[]

        int sum = 0;
        f(m-1, n-1, grid, sum);
        return minSum;

    }
};

// time: O(2^(m+n)) in worst case, as we are exploring all possible paths from the bottom-right corner to the top-left corner. Each cell can be reached from either the cell above it or the cell to the left of it, leading to an exponential number of paths.
// space: O(m+n) in worst case, as the maximum depth of the recursion can be m+n-2 (when we are at the bottom-right corner and we need to move all the way up to the top-left corner). This is because we can only move up or left, and in the worst case, we might have to move through all the rows and columns to reach the top-left corner.