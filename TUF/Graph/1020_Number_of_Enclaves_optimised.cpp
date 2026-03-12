class Solution {
private:
    void dfs(int row, int col, vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        grid[row][col] = 0;   // mark visited

        int delRow[4] = {-1, 0, 1, 0};
        int delCol[4] = {0, 1, 0, -1};

        for(int i = 0; i < 4; i++) {
            int nRow = row + delRow[i];
            int nCol = col + delCol[i];

            if(nRow >= 0 && nRow < m && nCol >= 0 && nCol < n && grid[nRow][nCol] == 1) {
                dfs(nRow, nCol, grid);
            }
        }
    }

public:
    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        // Traverse boundary rows
        for(int i = 0; i < m; i++) {
            if(grid[i][0] == 1) dfs(i, 0, grid);
            if(grid[i][n-1] == 1) dfs(i, n-1, grid);
        }

        // Traverse boundary columns
        for(int j = 0; j < n; j++) {
            if(grid[0][j] == 1) dfs(0, j, grid);
            if(grid[m-1][j] == 1) dfs(m-1, j, grid);
        }

        int count = 0;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == 1) count++;
            }
        }

        return count;
    }
};

// space : O(1)