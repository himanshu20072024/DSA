class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();

        vector<int> delRow = {0, 1, 1, 1, 0, -1, -1, -1};
        vector<int> delCol = {1, 1, 0, -1, -1, -1, 0, 1};

        if(grid[0][0] != 0 || grid[n-1][n-1] != 0) return -1;

        queue<pair<int, pair<int, int>>> q;
        q.push({1, {0, 0}});

        while(!q.empty()) {
            auto it = q.front();
            int dis = it.first;
            int row = it.second.first;
            int col = it.second.second;
            q.pop();

            if(row == n-1 && col == n-1) return dis;

            for(int i = 0; i < 8; i++) {
                int nRow = row + delRow[i];
                int nCol = col + delCol[i];

                if(nRow >= 0 && nRow < n && nCol >= 0 && nCol < n && grid[nRow][nCol] == 0) {
                    grid[nRow][nCol] = 1;
                    q.push({dis+1, {nRow, nCol}});
                }
            }
        }

        return -1;
    }
};

// time: O(N*N*8)
// space: O(N^2)