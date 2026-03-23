class Solution {
public:
    bool exist(int row, int col, int m, int n) {
        return row >= 0 && row < m && col >= 0 && col < n;
    }

    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        vector<int> delRow = {0, 1, 0, -1};
        vector<int> delCol = {1, 0, -1, 0};


        queue<pair<int, int>> q;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(mat[i][j] == 0) {
                    q.push({i, j});
                } else {
                    mat[i][j] = INT_MAX;
                }
            }
        }

        while(!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            
            q.pop();

            for(int i = 0; i < 4; i++) {
                int nRow = row + delRow[i];
                int nCol = col + delCol[i];
                if(exist(nRow, nCol, m, n) && mat[nRow][nCol] > 1 + mat[row][col]) {
                    mat[nRow][nCol] = 1 + mat[row][col];
                    q.push({nRow, nCol});
                }
            }
        }

        return mat;
    }
};