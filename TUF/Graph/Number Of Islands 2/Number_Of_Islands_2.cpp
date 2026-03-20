// User function Template for C++
class DisjointSet {
    vector<int> parent, rank, size;
public:
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
    bool isValid(int row, int col, int n, int m) {
        return row >= 0 && row < n && col >= 0 && col < m;
    }
    
    vector<int> numOfIslands(int n, int m, vector<vector<int>> &operators) {
        
        vector<vector<int>> vis(n, vector<int>(m, 0));
        DisjointSet ds(n*m);
        int cnt = 0;
        vector<int> ans;
        for(auto it: operators) {
            int row = it[0];
            int col = it[1];
            
            
            if(vis[row][col]) {
                ans.push_back(cnt);
                continue;
            } else {
                vis[row][col] = 1;
                cnt++;
                vector<int> delRow = {0, 1, 0, -1};
                vector<int> delCol = {1, 0, -1, 0};
                
                for(int i = 0; i < 4; i++) {
                    int nRow = row + delRow[i];
                    int nCol = col + delCol[i];
                    
                    if(isValid(nRow, nCol, n, m)) {
                        if(vis[nRow][nCol] == 1) {
                            int nodeNum = row*m + col;
                            int adjNodeNum = nRow*m + nCol;
                            if(ds.findUltimateParent(nodeNum) != ds.findUltimateParent(adjNodeNum)) {
                                cnt--;
                                ds.unionBySize(nodeNum, adjNodeNum);
                            }
                        }
                    }
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};
