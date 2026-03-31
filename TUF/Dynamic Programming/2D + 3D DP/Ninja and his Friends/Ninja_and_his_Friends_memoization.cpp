class Solution {
private:
    int f(int row, int col1, int col2, vector<vector<int>>& grid, vector<vector<vector<int>>> &dp) {
        int n = grid.size();
        int m = grid[0].size();

        if(col1 < 0 || col1 >= m || col2 < 0 || col2 >= m) return -1e8;
        
        if(row == n-1) {
            if(col1 == col2)    return grid[row][col1];
            else {
                return grid[row][col1] + grid[row][col2];
            }
        }


        if(dp[row][col1][col2] != -1) return dp[row][col1][col2];

        int maxi = -1e8;
        for(int i = -1; i <= 1; i++) {
            for(int j = -1; j <= 1; j++) {
                int sum = 0;
                if(col1 == col2) sum = grid[row][col1];
                else {
                    sum = grid[row][col1] + grid[row][col2];
                }
                sum += f(row+1, col1+i, col2+j, grid, dp);
                maxi = max(maxi, sum);
            }
        }

        return dp[row][col1][col2] = maxi;
    }

public:
    // alice -> (0,0) bob -> (0, n-1)
    int maxChocolates(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(m, -1)));

        return f(0, 0, m-1, grid, dp);
    }
};