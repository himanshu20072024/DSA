class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();

        if(grid[0][0] == 1) return 0;

        vector<int> prev(n, 0);
        prev[0] = 1;

        for(int i = 0; i < m; i++) {
            vector<int> curr(n, 0);

            for(int j = 0; j < n; j++) {

                if(grid[i][j] == 1) continue;

                if(i == 0 && j == 0) {
                    curr[j] = 1;
                    continue;
                }

                int top  = (i > 0) ? prev[j]   : 0;
                int left = (j > 0) ? curr[j-1] : 0;

                curr[j] = top + left;
            }

            prev = curr;
        }

        return prev[n-1];
    }
};

// time: O(m*n) in the worst case, where m is the number of rows and n is the number of columns in the grid. This is because we are iterating through each cell in the grid once to fill the dp table.
// space: O(n) in the worst case, due to the two 1D arrays (prev and curr) that we are using to store the number of unique paths to each cell in the current and previous rows. In the worst case, we may need to store results for all cells in a single row, which would require O(n) space. Additionally, we are using O(n) space for the curr array, which is also limited to O(n) in the worst case. Overall, the space complexity is O(n) due to the use of these two arrays.