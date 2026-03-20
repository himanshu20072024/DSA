class Solution {
public:
    vector<int> delRow = {0, 1, 0, -1};
    vector<int> delCol = {1, 0, -1, 0};
    void dfs(int row, int col, vector<vector<int>>& vis, vector<vector<int>>& grid, int& area) {
        int n = grid.size();
        vis[row][col] = 1;
        area += 1;
        for(int i = 0; i < 4; i++) {
            int nRow = row + delRow[i];
            int nCol = col + delCol[i];
            if(nRow >= 0 && nRow < n && nCol >= 0 && nCol < n && !vis[nRow][nCol] && grid[nRow][nCol] == 1) {
                dfs(nRow, nCol, vis, grid, area);
            }
        }
    }

    int largestIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        queue<pair<int, int>> q;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == 0) {
                    q.push({i,j});
                }
            }
        }

        if(q.size() == 0) return n*n;
        int ans = 0;
        
        while(!q.empty()) {
            auto it = q.front();
            int row = it.first;
            int col = it.second;
            grid[row][col] = 1;
            q.pop();

            vector<vector<int>> vis(n, vector<int>(n, 0));
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {
                    if(!vis[i][j] && grid[i][j] == 1) {
                        int area = 0;
                        dfs(i, j, vis, grid, area);
                        ans = max(ans, area);
                    }
                }
            }

            grid[row][col] = 0;
        }

        return ans;
    }
};