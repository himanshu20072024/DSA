class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> prev(n, 0);

        for(int i = 0; i < m; i++) {
            vector<int> curr(n, 0);
            for(int j = 0; j < n; j++) {
                if(i == 0 && j == 0) curr[j] = 1;
                else {
                    int up = 0, left = 0;
                    if(i > 0) up = prev[j];
                    if(j > 0) left = curr[j-1];
                    curr[j] = up + left;
                }
            }
            prev = curr;
        }

        return prev[n-1];
    }
};

// time: O(m*n) - we fill an m by n table, so the time complexity is proportional to the number of cells in the table.
// space: O(n) - we use two 1D arrays of size n to store the number of unique paths to each cell in the current and previous row, leading to a space complexity of O(n).