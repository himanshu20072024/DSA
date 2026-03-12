class Solution {
private : 
    void dfs(int row, int col, vector<vector<int>>& grid, vector<vector<int>>& vis) {
        int m = grid.size();
        int n = grid[0].size();
        vis[row][col] = 1;

        vector<int> delRow = {-1, 0, 1, 0};
        vector<int> delCol = {0, 1, 0, -1};

        for(int i = 0; i < 4; i++) {
            int nRow = row + delRow[i];
            int nCol = col + delCol[i];
            if(nRow >= 0 && nRow < m && nCol >= 0 && nCol < n && !vis[nRow][nCol] && grid[nRow][nCol] == 1) {
                dfs(nRow, nCol, grid, vis);
            }
        }
    };
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> vis(m, vector<int>(n, 0));
        for(int i = 0; i < m; i++) {
            if(grid[i][0] == 1 && !vis[i][0]) {
                dfs(i, 0, grid, vis);
            }

            if(grid[i][n-1] == 1 && !vis[i][n-1]) {
                dfs(i, n-1, grid, vis);
            }
        }

        for(int i = 0; i < n; i++) {
            if(grid[0][i] == 1 && !vis[0][i]) {
                dfs(0, i, grid, vis);
            }

            if(grid[m-1][i] == 1 && !vis[m-1][i]) {
                dfs(m-1, i, grid, vis);
            }
        }

        int count = 0;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(!vis[i][j] && grid[i][j] == 1) {
                    count++;
                }
            }
        }
        return count;
    }
};

 // here extra space by using vis 