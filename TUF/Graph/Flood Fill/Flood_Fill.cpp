class Solution {
public:
    bool exist(int row, int col, int m, int n) {
        return row >= 0 && row < m && col >= 0 && col < n;
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m = image.size();
        int n = image[0].size();

        if(image[sr][sc] == color) return image;

        int originalColor = image[sr][sc];
        image[sr][sc] = color;

        queue<pair<int, int>> q;
        q.push({sr, sc});

        vector<int> delRow = {0, 1, 0, -1};
        vector<int> delCol = {1, 0, -1, 0};

        while(!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for(int i = 0; i < 4; i++) {
                int nRow = row + delRow[i];
                int nCol = col + delCol[i];

                if(exist(nRow, nCol, m, n) && image[nRow][nCol] == originalColor) {
                    image[nRow][nCol] = color;
                    q.push({nRow, nCol});
                }
            }
        }

        return image;
    }
};