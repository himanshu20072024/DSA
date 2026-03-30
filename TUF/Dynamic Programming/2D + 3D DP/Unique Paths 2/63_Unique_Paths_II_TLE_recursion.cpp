class Solution {
private:
    int f(int row, int col, vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid[row][col] == 1) return 0;
        if(row == 0 && col == 0) {
            return 1;
        }
        int top = 0;
        int left = 0;
        if(row-1 >= 0 && obstacleGrid[row-1][col] == 0) {
            top = f(row-1, col, obstacleGrid);
        }
        if(col-1 >= 0 && obstacleGrid[row][col-1] == 0) {
            left = f(row, col-1, obstacleGrid);
        }

        return top+left;


    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        return f(m-1, n-1, obstacleGrid);
    }
};

// time: O(2^(m+n)) in the worst case, where m is the number of rows and n is the number of columns in the grid. This is because in the worst case, we may explore all possible paths from the top-left corner to the bottom-right corner, which can be exponential in nature.
// space: O(m+n) in the worst case, due to the recursive call stack.