class Solution {
public:
    vector<int> parent, rank;
    int ultimateParent(int node) {
        if(parent[node] == node) {
            return node;
        }
        return parent[node] = ultimateParent(parent[node]);
    }

    void unionByRank(int u, int v) {
        int ulp_u = ultimateParent(u);
        int ulp_v = ultimateParent(v);

        if(ulp_u != ulp_v) {
            if(rank[ulp_u] < rank[ulp_v]) {
                parent[ulp_u] = ulp_v;
            } else if(rank[ulp_u] > rank[ulp_v]) {
                parent[ulp_v] = ulp_u;
            } else {
                parent[ulp_u] = ulp_v;
                rank[ulp_v]++;
            }
        }
    }

    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size() < n-1) return -1;

        parent.resize(n);
        rank.resize(n, 0);
        for(int i = 0; i < n; i++) parent[i] = i;

        for(auto& it: connections) {
            int u = it[0];
            int v = it[1];

            unionByRank(u, v);
        }

        int components = 0;
        for(int i = 0; i < n; i++) {
            if(ultimateParent(i) == i) {
                components++;
            }
        }

        return components-1;
    }
};