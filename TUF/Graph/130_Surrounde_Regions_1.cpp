class Solution {
private:
    void dfs(int row, int col, vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();

        board[row][col] = '#';

        int delRow[4] = {-1,0,1,0};
        int delCol[4] = {0,1,0,-1};

        for(int i = 0; i < 4; i++) {
            int nRow = row + delRow[i];
            int nCol = col + delCol[i];

            if(nRow >= 0 && nRow < m && nCol >= 0 && nCol < n 
               && board[nRow][nCol] == 'O') {
                dfs(nRow, nCol, board);
            }
        }
    }

public:
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();

        // Left and Right boundary
        for(int i = 0; i < m; i++) {
            if(board[i][0] == 'O')
                dfs(i,0,board);

            if(board[i][n-1] == 'O')
                dfs(i,n-1,board);
        }

        // Top and Bottom boundary
        for(int j = 0; j < n; j++) {
            if(board[0][j] == 'O')
                dfs(0,j,board);

            if(board[m-1][j] == 'O')
                dfs(m-1,j,board);
        }

        // Convert surrounded regions
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(board[i][j] == 'O')
                    board[i][j] = 'X';
                else if(board[i][j] == '#')
                    board[i][j] = 'O';
            }
        }
    }
};