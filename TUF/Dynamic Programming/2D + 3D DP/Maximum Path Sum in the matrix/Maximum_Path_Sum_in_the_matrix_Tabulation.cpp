#include <bits/stdc++.h> 


int getMaxPathSum(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    
    vector<vector<int>> dp(n, vector<int>(m, 0));
    for(int i = 0; i < m; i++)  dp[n-1][i] = matrix[n-1][i];

    for(int i = n-2; i >= 0; i--) {
        for(int j = m-1; j >= 0; j--) {
            int node1 = INT_MIN, node2 = INT_MIN, node3 = INT_MIN;
            if(i+1 < n) {
                node1 = dp[i+1][j];
            }
            if(i+1 < n && j-1 >= 0) {
                node2 = dp[i+1][j-1];
            }
            if(i+1 < n && j+1 < m) {
                node3 = dp[i+1][j+1];
            }
            dp[i][j] = matrix[i][j] + max(node1, max(node2, node3));
            

        }
        
    }

    int ans = INT_MIN;  
    for(int i = 0; i < m; i++) {
        ans = max(ans, dp[0][i]);
    }

    return ans;
    



}

// time: O(n*m) where n is number of rows and m is number of columns
// space: O(n*m) for dp array










