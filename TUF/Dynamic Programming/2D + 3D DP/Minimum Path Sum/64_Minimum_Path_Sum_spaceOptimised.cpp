class Solution {
private:

public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> prev(n, 0);
        for(int i = 0; i < m; i++) {
            vector<int> curr(n, 0);
            for(int j = 0; j < n; j++) {
                if(i == 0 && j == 0) curr[j] = grid[i][j];
                else {
                    int top = 1e9, left  = 1e9;
                    if(i > 0) {
                        top = prev[j];
                    }
                    if(j > 0) {
                        left = curr[j-1];
                    }
                    curr[j] = grid[i][j] + min(top, left);
                }
            }
            prev = curr;
        }

        return prev[n-1];
    }
};

// time: O(m*n), as we are filling a 2D dp array of size m*n, where m is the number of rows and n is the number of columns in the input grid. Each cell in the dp array is computed in constant time O(1) by taking the minimum of the top and left cells and adding the current cell value from the grid.
// space: O(n), as we are using two 1D arrays (prev and curr) of size n to store the minimum path sums for the current and previous rows. We only need to keep track of the current and previous rows at any given time, so we can optimize the space complexity from O(m*n) to O(n). The space used by the input grid is not considered in the space complexity analysis, as it is given as part of the input and does not depend on the size of the dp arrays.