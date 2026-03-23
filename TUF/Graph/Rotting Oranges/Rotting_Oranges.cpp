class Solution {
public:
    bool exist(int row, int col, int m, int n) {
        return row >= 0 && row < m && col >= 0 && col < n;
    }

    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        queue<pair<int, pair<int, int>>> q;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == 2) {
                    q.push({0, {i, j}});
                }
            }
        }

        vector<int> delRow = {0, 1, 0, -1};
        vector<int> delCol = {1, 0, -1, 0};
        int maxTime = 0;
        while(!q.empty()) {
            auto it = q.front();
            q.pop();
            int time = it.first;
            maxTime = max(maxTime, time);
            int row = it.second.first;
            int col = it.second.second;

            for(int i = 0; i < 4; i++) {
                int nRow = row + delRow[i];
                int nCol = col + delCol[i];

                if(exist(nRow, nCol, m, n) && grid[nRow][nCol] == 1) {
                    q.push({time+1, {nRow, nCol}});
                    grid[nRow][nCol] = 2;
                }
            }
        }

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == 1) {
                    return -1;
                }
            }
        }

        return maxTime;
    }
};