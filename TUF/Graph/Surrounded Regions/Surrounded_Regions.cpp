class Solution {
public:
    vector<int> delRow = {0, 1, 0, -1};
    vector<int> delCol = {1, 0, -1, 0};
    bool exist(int row, int col, int m, int n) {
        return row >= 0 && row < m && col >= 0 && col < n;
    }
    void dfs(int row, int col, vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        board[row][col] = '2';
        for(int i = 0; i < 4; i++) {
            int nRow = row + delRow[i];
            int nCol = col + delCol[i];

            if(exist(nRow, nCol, m, n) && board[nRow][nCol] == 'O') {
                dfs(nRow, nCol, board);
            }
        }
    }

    void solve(vector<vector<char>>& board) {

        if(board.empty()) return;
        
        int m = board.size();
        int n = board[0].size();

        

        

        for(int i = 0; i < m; i++) {
            // first column
            if(board[i][0] == 'O') {
                dfs(i, 0, board);
            }
            // last column
            if(board[i][n-1] == 'O') {
                dfs(i, n-1, board);
            }
        }

        for(int i = 0; i < n; i++) {
            // first row
            if(board[0][i] == 'O') {
                dfs(0, i, board);
            }
            // last row
            if(board[m-1][i] == 'O') {
                dfs(m-1, i, board);
            }
        }

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(board[i][j] == '2') {
                    board[i][j] = 'O';
                }
                else if(board[i][j] == 'O') {
                    board[i][j] = 'X';
                }
            }
        }
    }
};