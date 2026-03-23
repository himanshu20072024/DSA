class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        vector<vector<int>> ans(m, vector<int>(n, 0));
        vector<vector<int>> vis(m, vector<int>(n, 0));

        queue<pair<int, int>> q;
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(mat[i][j] == 0) {
                    q.push({i, j});
                    vis[i][j] = 1;
                }
            }
        }

        vector<int> delRow = {-1, 0, 1, 0};
        vector<int> delCol = {0, 1, 0, -1};
        while(!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            
            for(int i = 0; i < 4; i++) {
                int nRow = row + delRow[i];
                int nCol = col + delCol[i];

                if(nRow >= 0 && nRow < m && nCol >= 0 && nCol < n && !vis[nRow][nCol]) {
                    ans[nRow][nCol] = ans[row][col] + 1;
                    vis[nRow][nCol] = 1;
                    q.push({nRow, nCol});
                }
            }
        }

        return ans;
    }
};