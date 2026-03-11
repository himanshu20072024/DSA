class Solution {
    private :
        void dfs(int row, int col, vector<vector<int>>& grid, vector<pair<int, int>>& vct, int baseRow, baseCol) {
            vis[row][col] = 1;
            int n = grid.size();
            int m = grid[0].size();

            vct.push_back({row - baseRow, col - baseCol});

            int delRow[] = {-1, 0, 1, 0};
            int delCol[] = {0, -1, 0, 1};


            for(int i = 0; i < 4; i++) {
                int nRow = row + delRow[i];
                int nCol = col + delCol[i];

                if(nRow >= 0 && nRow < n && nCol >= 0 && nCol < m && !vis[nRow][nCol] && grid[nRow][nCol] == 1) {
                    dfs(nRow, nCol, grid, vct, baseRow, baseCol);
                }
            }
        }
    public :
        int countDistinctIslands(vector<vector<int>>& grid) {
            int n = grid.size();
            int m = grid[0].size(); 
            vector<vector<int>> vis(n, vector<int>(m, 0));
            set<vector<pair<int, int>>> st;

            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                    if(!vis[i][j] && grid[i][j] == 1) {
                        vector<pair<int, int>> vct;
                        dfs(i, j, grid, vct, i, j);
                        st.insert(vct);
                    }
                }
            }

            return st.size();
        }
}

// time : O(N*M* log(N*M) + N*M*4)