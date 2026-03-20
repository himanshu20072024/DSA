class DisjointSet {
    
public:
    vector<int> parent, rank, size;
    DisjointSet(int n) {
        rank.resize(n+1, 0);
        parent.resize(n+1);
        size.resize(n+1);

        for(int i = 0; i <= n; i++) {
            parent[i] = i;
        }

        for(int i = 0; i <=n ;i++) {
            size[i] = 1;
        }
    }

    int findUltimateParent(int node) {
        if(parent[node] == node) {
            return node;
        }
        return parent[node] = findUltimateParent(parent[node]);
    }

    void unionByRank(int u, int v) {
        int ulp_u = findUltimateParent(u);
        int ulp_v = findUltimateParent(v);
        if(ulp_u == ulp_v) return;
        if(rank[ulp_u] < rank[ulp_v]) parent[ulp_u] = ulp_v;
        else if(rank[ulp_v] < rank[ulp_u]) parent[ulp_v] = ulp_u;
        else {
            parent[ulp_u] = ulp_v;
            rank[ulp_v]++;
        }
    }

    void unionBySize(int u, int v) {
        int ulp_u = findUltimateParent(u);
        int ulp_v = findUltimateParent(v);

        if(ulp_u == ulp_v) return;
        
        if(size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        } else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
        
    }

}; 
class Solution {
public:
    bool ifExist(int row, int col, int n) {
        return row >= 0 && row < n && col >=0 && col < n;
    }

    int largestIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        DisjointSet ds(n*n);

        for(int row = 0; row < n; row++) {
            for(int col = 0; col < n; col++) {
                int oldNumbering = row*n + col;
                if(grid[row][col] == 0) continue;
                vector<int> delRow = {0, 1, 0, -1};
                vector<int> delCol = {1, 0, -1, 0};
                for(int i = 0; i < 4; i++) {
                    int nRow = row + delRow[i];
                    int nCol = col + delCol[i];
                    if(ifExist(nRow, nCol, n) && grid[nRow][nCol] == 1) {
                        int newNumbering = nRow*n + nCol;
                        ds.unionBySize(oldNumbering, newNumbering);
                    }
                }
            }
        }

        int ans = 0;
        for(int row = 0; row < n; row++) {
            for(int col = 0; col < n; col++) {
                if(grid[row][col] == 1) continue;

                vector<int> delRow = {0, 1, 0, -1};
                vector<int> delCol = {1, 0, -1, 0};
                set<int> st;

                for(int i = 0; i < 4; i++) {
                    int nRow = row + delRow[i];
                    int nCol = col + delCol[i];
                    if(ifExist(nRow, nCol, n) && grid[nRow][nCol] == 1) {
                        int newNumbering = nRow*n + nCol;
                        st.insert(ds.findUltimateParent(newNumbering));
                    }
                }

                int maxi = 0;
                for(auto it: st) {
                    int node = it;
                    maxi += ds.size[node];
                }
                ans = max(ans, maxi+1);
            }
        }

        for(int cellNum = 0; cellNum < n*n; cellNum++) {
            ans = max(ans, ds.size[ds.findUltimateParent(cellNum)]);
        }
        //if(ans == 0) return n*n;
        return ans;

        
    }
};
















