class Solution {
private : 
    void dfs(int row, int col, vector<vector<char>>& board, vector<vector<int>>& vis) {
        int m = board.size();
        int n = board[0].size();
        vis[row][col] = 1;

        vector<int> delRow = {-1, 0, 1, 0};
        vector<int> delCol = {0, 1, 0, -1};

        for(int i = 0; i < 4; i++) {
            int nRow = row + delRow[i];
            int nCol = col + delCol[i];
            if(nRow >= 0 && nRow < m && nCol >= 0 && nCol < n && !vis[nRow][nCol] && board[nRow][nCol] == 'O') {
                dfs(nRow, nCol, board, vis);
            }
        }
    };
public:
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();

        vector<vector<int>> vis(m, vector<int>(n, 0));
        for(int i = 0; i < m; i++) {
            if(board[i][0] == 'O' && !vis[i][0]) {
                dfs(i, 0, board, vis);
            }

            if(board[i][n-1] == 'O' && !vis[i][n-1]) {
                dfs(i, n-1, board, vis);
            }
        }

        for(int i = 0; i < n; i++) {
            if(board[0][i] == 'O' && !vis[0][i]) {
                dfs(0, i, board, vis);
            }

            if(board[m-1][i] == 'O' && !vis[m-1][i]) {
                dfs(m-1, i, board, vis);
            }
        }

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(!vis[i][j] && board[i][j] == 'O') {
                    board[i][j] = 'X';
                }
            }
        }
    }
};