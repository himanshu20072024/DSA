class Solution {
    private :
        void dfs(int row, int col, vector<vector<int>>& grid, int& vis[][], int& delRow[], int& delCol[]) {
            vis[row][col] == 1;
            int n = grid.size();
            int m = grid[0].size();

            for(int i = 0; i < 4; i++) {
                int nRow = row + delRow[i];
                int nCol = col + delCol[i];
                if(nRow >= 0 && nRow < n && nCol >= 0 && nCol < m && !vis[nRow][nCol] && grid[nRow][nCol] == 1) {
                    dfs(nRow, nCol, grid, vis, delRow, delCol);
                }
            }
        }
    public :
        int numberOfEnclaves(vector<vector<int>>& grid) {
            int n = grid.size();
            int m = grid[0].size();

            int vis[n][m] = {0};
            int delRow[] = {-1, 0, 1, 0};
            int delCol[] = {0, 1, 0, -1};

            // for first row and last row
            for(int i = 0; i < m; i++) {
                if(!vis[0][i] && grid[0][i] == 1) {
                    dfs(0, i, grid, vis, delRow, delCol);
                }

                if(!vis[n-1][i] && grid[n-1][i] == 1) {
                    dfs(n-1, i, grid, vis, delRow, delCol);
                }
            }

            // for first and last column
            for(int i = 0; i < n; i++) {
                if(!vis[i][0] && grid[i][0] == 1) {
                    dfs(i, 0, grid, vis, delRow, delCol);
                }

                if(!vis[i][m-1] && grid[i][m-1] == 1) {
                    dfs(i, m-1, grid, vis, delRow, delCol);
                }
            }

            int count = 0;
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                    if(grid[i][j] == 1 && !vis[i][j]) {
                        count++;
                    }
                }
            }

            return count;
        }
}