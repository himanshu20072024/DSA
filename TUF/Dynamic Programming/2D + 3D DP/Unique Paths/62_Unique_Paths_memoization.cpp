class Solution {
private:
    int f(int row, int col, int m, int n, vector<vector<int>> &dp) {
        if(row == m-1 && col == n-1) return 1;

        if(dp[row][col] != -1) return dp[row][col];
        int nRow = 0;
        int nCol = 0;
        if(row + 1 < m) {
            nRow =  f(row+1, col, m, n, dp);
        }

        if(col + 1 < n) {
            nCol = f(row, col+1, m, n, dp); 
        }

        return dp[row][col] = nRow+nCol;
    }

public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return f(0, 0, m, n, dp);
    }
};

// time: O(m*n) - each cell is computed once and stored in the dp table, leading to a linear time complexity with respect to the number of cells.
// space: O(m*n) - the dp table takes up O(m*n) space, and the recursion stack can go as deep as O(m+n) in the worst case, but the dominant space usage is from the dp table.

class Solution {
private:
    int f(int row, int col, vector<vector<int>> &dp) {
        if(row == 0 && col == 0) return 1;

        if(dp[row][col] != -1) return dp[row][col];
        int nRow = 0;
        int nCol = 0;
        if(row-1 >= 0) {
            nRow = f(row-1, col, dp);
        }

        if(col-1 >= 0) {
            nCol = f(row, col-1, dp);
        }

        return dp[row][col] = nRow + nCol;
    }

public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));

        return f(m-1, n-1, dp);
    }
};
