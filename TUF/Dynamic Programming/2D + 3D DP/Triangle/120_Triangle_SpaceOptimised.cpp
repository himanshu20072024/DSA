class Solution {

public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        int m = triangle[n-1].size();

        vector<int> next(n, -1);

        for(int i = 0; i < n; i++) {
            next[i] = triangle[n-1][i];
        }

        for(int i = n-2; i >= 0; i--) {
            vector<int> curr(i+1, 0);
            for(int j = i; j >= 0; j--) {
                int down = next[j];
                int downRight = next[j+1];
                curr[j] = triangle[i][j] + min(down, downRight);
            }
            next = curr;
        }

        return next[0];
    }
};

// time: O(n*m) where n is the number of rows in the triangle and m is the number of elements in the last row
// space: O(n) for the dp array