class Solution {
public:
    vector<int> delRow = {0, 1, 0, -1};
    vector<int> delCol = {1, 0, -1, 0};

    bool isPossible2Reach(int i, int j, int t, vector<vector<int>>& grid, int dest, vector<vector<int>>& vis) {
        if(i < 0 || i > dest || j < 0 || j > dest || vis[i][j] || grid[i][j] > t)
            return false;

        if(i == dest && j == dest) return true;

        vis[i][j] = 1;

        for(int d = 0; d < 4; d++) {
            int new_i = i + delRow[d];
            int new_j = j + delCol[d];

            if(isPossible2Reach(new_i, new_j, t, grid, dest, vis))
                return true;
    }

    return false;
    }

    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();

        int l = grid[0][0];
        int r = n*n-1;
        int result = 0;
        
        while(l <= r) {
            vector<vector<int>> vis(n, vector<int>(n, 0));
            int mid = l + (r-l)/2;
            if(isPossible2Reach(0, 0, mid, grid, n-1, vis)) {
                result = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        return result;
    }
};