class Solution {
private:
    void dfs(int row, int col, vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        grid[row][col] = '0';   // mark visited

        int delRow[4] = {-1, 0, 1, 0};
        int delCol[4] = {0, 1, 0, -1};

        for(int i = 0; i < 4; i++) {
            int nRow = row + delRow[i];
            int nCol = col + delCol[i];

            if(nRow >= 0 && nRow < m &&
               nCol >= 0 && nCol < n &&
               grid[nRow][nCol] == '1') {

                dfs(nRow, nCol, grid);
            }
        }
    }

public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        int count = 0;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == '1') {
                    dfs(i, j, grid);
                    count++;
                }
            }
        }

        return count;
    }
};