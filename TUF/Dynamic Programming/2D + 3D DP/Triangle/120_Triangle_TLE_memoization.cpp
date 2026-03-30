class Solution {
private:
    int f(int idx, int row, vector<vector<int>>& triangle, vector<vector<int>> &dp) {
        if(row == triangle.size() - 1) {
            return triangle[row][idx];
        }
        if(dp[row][idx] != -1) return dp[row][idx];
        int a = f(idx, row+1, triangle, dp);
        int b = f(idx+1, row+1, triangle, dp);

        return dp[row][idx] = min(a, b) + triangle[row][idx];
    }

public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        int m = triangle[n-1].size();

        vector<vector<int>> dp(n, vector<int>(m, -1));

        return f(0, 0, triangle, dp);
    }
};

// time: O(n*m) where n is the number of rows in the triangle and m is the number of elements in the last row
// space: O(n*m) for the dp array + O(n) for the recursion stack