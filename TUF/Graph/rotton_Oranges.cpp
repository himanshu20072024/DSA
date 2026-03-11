class Solution {
    public :
        int orangesRotting(vector<vector<int>>& grid) {
            int n = grid.size();
            int m = grid[0].size();

            queue<pair<int, pair<int, int>>> q;
            
            int vis[n][m];

            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                    if(grid[i][j] == 2) {
                        q.push({0, {i, j}});
                        vis[i][j] = 2;
                    } else {
                        vis[i][j] = 0;
                    }
                }
            }

            int maxTime = 0;
            int delRow[] = {-1, 0, 1, 0};
            int delCol[] = {0, 1, 0, -1};
            while(!q.empty()) {
                int row = q.front().second.first;
                int col = q.front().second.second;
                int time = q.front().first;
                q.pop();

                for(int i = 0; i < 4; i++) {
                    int newRow = row + delRow[i];
                    int newCol = col + delCol[i];
                    if(newRow >= 0 && newRow < n && newCol >= 0 && newCol < m && vis[newRow][newCol] != 2 && grid[newRow][newCol] == 1) {
                        q.push({time+1, {newRow, newCol}});
                        maxTime = max(maxTime, time+1);
                        vis[newRow][newCol] = 1;
                    }
                }
            }
            
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                    if(vis[i][j] != 2 && grid[i][j] == 1) {
                        return -1;
                    }
                }
            }
            return maxTime;
        }
}