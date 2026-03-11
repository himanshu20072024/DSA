class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m = image.size();
        int n = image[0].size();
        vector<int> delRow = {-1, 0, 1, 0};
        vector<int> delCol = {0, 1, 0, -1};

        queue<pair<int, int>> q;
        q.push({sr, sc});
        vector<vector<int>> vis(m, vector<int>(n, 0));

        while(!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            int oldColor = image[row][col];
            q.pop();
            image[row][col] = color;
            vis[row][col] = 1;

            for(int i = 0; i < 4; i++) {
                int nRow = row + delRow[i];
                int nCol = col + delCol[i];

                if(nRow >= 0 && nRow < m && nCol >= 0 && nCol < n && !vis[nRow][nCol] && oldColor == image[nRow][nCol]) {
                    q.push({nRow, nCol});
                }
            }
        }
        return image;
    }
};