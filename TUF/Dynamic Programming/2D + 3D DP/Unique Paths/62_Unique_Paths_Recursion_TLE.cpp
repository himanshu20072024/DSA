class Solution {
private:
    int f(int row, int col, int m, int n) {
        if(row == m-1 && col == n-1) return 1;

        int nRow = 0;
        int nCol = 0;
        if(row + 1 < m) {
            nRow =  f(row+1, col, m, n);
        }

        if(col + 1 < n) {
            nCol = f(row, col+1, m, n); 
        }

        return nRow+nCol;
    }

public:
    int uniquePaths(int m, int n) {
        return f(0, 0, m, n);
    }
};

// time: O(2^(m+n)) - exponential time complexity, as each cell can lead to two recursive calls (down and right).
// space: O(m+n) - the maximum depth of the recursion stack can be m+n

class Solution {
private:
    int f(int row, int col) {
        if(row == 0 && col == 0) return 1;

        int nRow = 0;
        int nCol = 0;
        if(row-1 >= 0) {
            nRow = f(row-1, col);
        }

        if(col-1 >= 0) {
            nCol = f(row, col-1);
        }

        return nRow + nCol;
    }

public:
    int uniquePaths(int m, int n) {
        return f(m-1, n-1);
    }
};
