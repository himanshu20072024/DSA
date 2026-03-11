class Solution {
    private :
        void dfs(int row, int col, vector<vector<char>>& mat, vector<vector<int>>& vis, int& delRow[], int& delCol[]) {
            vis[row][col] = 1;
            int n = mat.size();
            int m = mat[0].size();

            for(int i = 0; i < 4; i++) {
                int nRow = row + delRow[i];
                int nCol = col + delCol[i];
                if(nRow >= 0 && nRow < n && nCol >= 0 && nCol < m && !vis[nRow][nCol] && mat[nRow][nCol] == 'O') {
                    dfs(nRow, nCol, mat, vis);
                }
            }
        }

    public :
        vector<vector<char>> fill(vector<vector<char>> mat) {
            int n = mat.size();
            int m = mat[0].size();
            vector<vector<int>> vis(n, vector<char>(m, 0));

            // check for top, right, bottom, left
            int delRow[4] = {-1, 0, 1, 0};
            int delCol[4] = {0, 1, 0, -1};

            // first row traversing
            for(int i = 0; i < m; i++) {

                // for first row
                if(mat[0][i] == 'O' && !vis[0][i]) {
                    dfs(0, i, mat, vis, delRow, delCol);
                }

                // for last row
                if(!vis[n-1][i] && mat[n-1][i] == 'O') {
                    dfs(n-1, i, mat, vis, delRow, delCol);
                }
            }

            for(int j = 0; j < n; j++) {

                // for first column
                if(!vis[j][0] && mat[j][0] == 'O') {
                    dfs(j, 0, mat, vis, delRow, delCol);
                }

                // for last column
                if(!vis[j][0] && mat[j][0] == 'O') {
                    dfs(j, 0, mat, vis, delRow, delCol);    
                }
            }

            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                    if(!vis[i][j] && mat[i][j] == 'O') {
                        mat[i][j] = 'X';
                    }
                }
            }
            return mat;
        }
}

// time : O(N*M) near about
// space : O(N*M) near about 