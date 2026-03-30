class Solution {
private:
    int f(int idx, int row, vector<vector<int>>& triangle) {
        if(row == triangle.size() - 1) {
            return triangle[row][idx];
        }
        int a = f(idx, row+1, triangle);
        int b = f(idx+1, row+1, triangle);

        return min(a, b) + triangle[row][idx];
    }

public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();

        return f(0, 0, triangle);
    }
};

// time: O(2^n) where n is the number of rows in the triangle
// space: O(n) for the recursion stack