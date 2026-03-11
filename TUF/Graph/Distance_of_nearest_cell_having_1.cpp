class Solution {
    public : 
        vector<vector<int>> nearest(vector<vector<int>> grid) {
            int n = grid.size();
            int m = grid[0].size();
            vector<vector<int>> vis(n, vector<int>(m, 0));
            vector<vector<int>> dist(n, vector<int>(m, -1));

            queue<pair<int, pair<int, int>>> q;
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                    if(grid[i][j] == 1) {
                        vis[i][j] = 1;
                        q.push({0, {i, j}});
                    } else {
                        vis[i][j] = 0;
                    }
                }
            }

            int deltaRow[] = {-1, 0, 1, 0};
            int deltaCol[] = {0, 1, 0, -1};

            while(!q.empty()) {
                int distance = q.front().first;
                int row = q.front().second.first;
                int col = q.front().second.second;
                
                dist[row][col] = distance;
                q.pop();

                for(int i = 0; i < 4; i++) {
                    int newRow = row + deltaRow[i];
                    int newCol = col + deltaCol[i];
                    if(newRow >= 0 && newRow < n && newCol >= 0 && newCol < m && !vis[newRow][newCol] && grid[newRow][newCol] == 0) {
                        q.push({distance + 1, {newRow, newCol}});
                        vis[newRow][newCol] = 1;
                    }
                }
            }

            return dist;
        }
}

// time : O(N*M + N*M*4)
// space : O(N*M)