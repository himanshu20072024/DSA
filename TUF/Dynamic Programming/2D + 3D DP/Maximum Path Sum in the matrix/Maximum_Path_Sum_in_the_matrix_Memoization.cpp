#include <bits/stdc++.h> 

int a, b;


int f(int row, int col, vector<vector<int>> &matrix, vector<vector<int>> &dp) {
    if(row == a-1) {
        return matrix[row][col];
    }

    if(dp[row][col] != -1) return dp[row][col];

    int sum1 = INT_MIN, sum2 = INT_MIN, sum3 = INT_MIN;

    if(col-1 >= 0 && row+1 < a) {
        sum1 = f(row+1, col-1, matrix, dp);
    }
    if(row+1 < a && col+1 < b) {
        sum3 = f(row+1, col+1, matrix, dp);
    }
    if(row+1 < a) {
        sum2 = f(row+1, col, matrix, dp);
    }

    return dp[row][col] = matrix[row][col] + max(sum1, max(sum2, sum3));


}

int getMaxPathSum(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    a = n;
    b = m;

    vector<vector<int>> dp(n, vector<int>(m, -1));

    int maxMax = INT_MIN;
    for(int i = 0; i < m; i++) {
        int maxSum = f(0, i, matrix, dp);
        maxMax = max(maxMax, maxSum);
    }

    return maxMax;


}

// time: O(n*m) where n is number of rows and m is number of columns
// space: O(n*m) for dp array + O(n) for recursion stack = O(n*m)   