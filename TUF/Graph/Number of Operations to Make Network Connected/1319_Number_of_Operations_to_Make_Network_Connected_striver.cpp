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
    int makeConnected(int n, vector<vector<int>>& connections) {
        DisjointSet ds(n);

        int cntExtra = 0;
        for(auto& it: connections) {
            int u = it[0];
            int v = it[1];

            if(ds.findUltimateParent(u) == ds.findUltimateParent(v)) {
                cntExtra++;
            } 
            else {
                ds.unionBySize(u, v);
            }
        }

        int components = 0;
        for(int i = 0; i < n; i++) {
            if(ds.parent[i] == i) {
                components++;
            }
        }

        if(components-1 <= cntExtra) return components-1;
        else return -1;
    }
};