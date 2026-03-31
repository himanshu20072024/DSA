class Solution {
private:
    // int f(int row, int col1, int col2, vector<vector<int>>& grid, vector<vector<vector<int>>> &dp) {
    //     int n = grid.size();
    //     int m = grid[0].size();

    //     if(col1 < 0 || col1 >= m || col2 < 0 || col2 >= m) return -1e8;
        
    //     if(row == n-1) {
    //         if(col1 == col2)    return grid[row][col1];
    //         else {
    //             return grid[row][col1] + grid[row][col2];
    //         }
    //     }


    //     if(dp[row][col1][col2] != -1) return dp[row][col1][col2];

    //     int maxi = -1e8;
    //     for(int i = -1; i <= 1; i++) {
    //         for(int j = -1; j <= 1; j++) {
    //             int sum = 0;
    //             if(col1 == col2) sum = grid[row][col1];
    //             else {
    //                 sum = grid[row][col1] + grid[row][col2];
    //             }
    //             sum += f(row+1, col1+i, col2+j, grid, dp);
    //             maxi = max(maxi, sum);
    //         }
    //     }

    //     return dp[row][col1][col2] = maxi;
    // }

public:
    // alice -> (0,0) bob -> (0, n-1)
    int maxChocolates(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> front(m, vector<int>(m, 0));
        vector<vector<int>> curr(m, vector<int>(m, 0));

        // base case initialization
        // last row where we have to reach
        for(int col1 = 0; col1 < m; col1++) {
            for(int col2 = 0; col2 < m; col2++) {
                if(col1 == col2) front[col1][col2] = grid[n-1][col1];
                else {
                    front[col1][col2] = grid[n-1][col1] + grid[n-1][col2];
                }
            }
        }

        // moving from n-2 to 0 
        for(int row = n-2; row >= 0; row--) {
            for(int col1 = 0; col1 < m; col1++) { // for alice
                for(int col2 = 0; col2 < m; col2++) { // for bob
                    // for particular col1 and col2 total 9 boxes will be there in i+1
                    int maxi = -1e8;
                    for(int i = -1; i <= 1; i++) {
                        for(int j = -1; j <= 1; j++) {
                            int sum = 0;
                            int nCol1 = col1 + i;
                            int nCol2 = col2 + j;
                            if(col1 == col2) sum = grid[row][col1];
                            else {
                                sum = grid[row][col1] + grid[row][col2];
                            }
                            if(nCol1 >= 0 && nCol1 < m && nCol2 >= 0 && nCol2 < m) 
                                sum += front[nCol1][nCol2];
                            else  
                                sum = -1e8;
                            maxi = max(maxi, sum);
                        }
                    }
                    curr[col1][col2] = maxi;
                }
            }
            front = curr;
        }

        return front[0][m-1];
    }
};