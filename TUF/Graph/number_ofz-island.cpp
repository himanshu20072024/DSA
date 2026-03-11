class Solution {
    private :
        void bfs(int row, int col, vector<vector<int>>& vis, vector<vector<int>>& grid) {\
            vis[row][col] = 1;
            int n = grid.size();
            int m = grid[0].size();
            queue<pair<int, int>> q;
            q.push({row, col});

            while(!q.empty()) {
                int row = q.front().first;
                int col = q.front().second;

                for(int delrow = -1; delrow <= 1; delrow++) {
                    for(int delcol = -1; delcol <= 1; delcol++) {
                        int newrow = row + delrow;
                        int newcol = col + delcol;
                        if(newrow >= 0 && newrow < n && newcol >= 0 && newcol < m && !vis[newrow][newcol] && grid[newrow][newcol] == '1') {
                            vis[newrow][newcol] = 1;
                            q.push({newrow, newcol});
                        }
                    }
                }
            }
        }

    public :
        int numIslands(vector<vector<char>> grid) {
            int n = grid.size();
            int m = grid[0].size();

            vector<vector<int>> vis(n, vector<int>(m, 0));
            int count = 0;
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                    if(!vis[i][j] && vis[i][j] == '1') {
                        bfs(i, j, vis, grid);
                        count++;
                    }
                }
            }
            return count;
        }
}

// space : O(N^2) + O(N^2)  ----> one for queue and one for vis
// time : O(N^2 * 8) nearly equal to O(N^2)