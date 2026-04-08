class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();

        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
        pq.push({0, {0, 0}});

        vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
        dist[0][0] = 0;

        vector<int> delRow = {0, 1, 0, -1};
        vector<int> delCol = {1, 0, -1, 0};
        while(!pq.empty()) {
            auto it = pq.top();
            pq.pop();

            int diff = it.first;
            int row = it.second.first;
            int col = it.second.second;

            if(row == n-1 && col == m-1) return diff;

            for(int i = 0; i < 4; i++) {
                int nRow = row + delRow[i];
                int nCol = col + delCol[i];

                if(nRow >= 0 && nRow < n && nCol >= 0 && nCol < m) {
                    int newEffort = max((abs(heights[row][col] - heights[nRow][nCol])) , diff);
                    if(newEffort < dist[nRow][nCol]) {
                        dist[nRow][nCol] = newEffort;
                        pq.push({newEffort, {nRow, nCol}});
                    }
                }
            }
        }
        return 0;
    }
};