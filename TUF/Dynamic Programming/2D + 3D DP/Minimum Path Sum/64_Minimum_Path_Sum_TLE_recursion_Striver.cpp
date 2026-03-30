class Solution {
private:
    int f(int row, int col, vector<vector<int>>& grid) {
        if(row == 0 and col == 0) return grid[row][col];
        if(row < 0 || col < 0) return 1e9;

        int top = f(row-1, col, grid);
        int left = f(row, col-1, grid);

        return grid[row][col] + min(top, left);
    }

public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        return f(m-1, n-1, grid);
    }
};

// time: O(2^(m+n)) in worst case, as we are exploring all possible paths from the bottom-right corner to the top-left corner. Each cell can be reached from either the cell above it or the cell to the left of it, leading to an exponential number of paths.
// space: O(m+n) in worst case, as the maximum depth of the recursion can be m+n-2 (when we are at the bottom-right corner and we need to move all the way up to the top-left corner). This is because we can only move up or left, and in the worst case, we might have to move through all the rows and columns to reach the top-left corner.