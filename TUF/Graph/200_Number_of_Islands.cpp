class Solution {
private: 
    void dfs(int row, int col, vector<vector<char>>& grid, vector<vector<int>>& vis) {
        int m = grid.size();
        int n = grid[0].size();
        vis[row][col] = 1;

        int delRow[4] = {-1,0,1,0};
        int delCol[4] = {0,1,0,-1};

        for(int i = 0; i < 4; i++) {
            int nRow = row + delRow[i];
            int nCol = col + delCol[i];

            if(nRow >= 0 && nRow < m && nCol >= 0 && nCol < n && !vis[nRow][nCol] && grid[nRow][nCol] == '1') {
                dfs(nRow, nCol, grid, vis);
            }
        }

    };
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> vis(m, vector<int>(n, 0));

        int count = 0;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == '1' && !vis[i][j]) {
                    dfs(i, j, grid, vis);
                    count++;
                }
            }
        }

        return count;
    }
};

// not optimal by space you can remove vis and directly mark visited 1 as 0 