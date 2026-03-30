#include <bits/stdc++.h> 

int getMaxPathSum(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    
    vector<int> next(m, 0);
    for(int i = 0; i < m; i++)  next[i] = matrix[n-1][i];

    for(int i = n-2; i >= 0; i--) {
        vector<int> curr(m, 0);
        for(int j = m-1; j >= 0; j--) {
            int node1 = INT_MIN, node2 = INT_MIN, node3 = INT_MIN;
            if(i+1 < n) {
                node1 = next[j];
            }
            if(i+1 < n && j-1 >= 0) {
                node2 = next[j-1];
            }
            if(i+1 < n && j+1 < m) {
                node3 = next[j+1];
            }
            curr[j] = matrix[i][j] + max(node1, max(node2, node3));
            

        }
        next = curr;
    }

    int ans = INT_MIN;  
    for(int i = 0; i < m; i++) {
        ans = max(ans, next[i]);
    }

    return ans;

}

// time: O(n*m) where n is number of rows and m is number of columns
// space: O(m) for dp array










