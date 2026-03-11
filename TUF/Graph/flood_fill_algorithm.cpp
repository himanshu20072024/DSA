class Solution {
    private : 
        void dfs(vector<vector<int>>& image, int sr, int sc, int newColor, int oldColor) {
            int n = image.size();
            int m = image[0].size();
            image[sr][sc] = newColor;

            if(sr - 1 >= 0 && image[sr-1][sc] == oldColor) {
                image[sr-1][sc] = newColor;
                dfs(image, sr-1, sc, newColor, oldColor);
            }

            if(sc - 1 >= 0 && image[sr][sc-1] == oldColor) {
                image[sr][sc-1] = newColor;
                dfs(image, sr, sc-1, newColor, oldColor);
            }

            if(sc + 1 < m && image[sr][sc+1] == oldColor) {
                image[sr][sc+1] = newColor;
                dfs(image, sr, sc+1, newColor, oldColor);
            }

            if(sr + 1 < m && image[sr+1][sc] == oldColor) {
                image[sr+1][sc] = newColor;
                dfs(image, sr+1, sc, newColor, oldColor);
            }
        }
    public : 
        vector<vector<int>> floodfill(vector<vector<int>>& image, int sr, int sc, int newColor) {
            int oldColor = image[sr][sc];
            
            dfs(image, sr, sc, newColor, oldColor);
            return image;
        }
}

// time : O(N*M)
// space : O(N*M) stack space !!!