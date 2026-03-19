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

    //  i can remove this as i am not using this in this kruskals algorithm !!!
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
    int spanningTrees(int V, vector<vector<int>> adj[]) {
        DisjointSet ds(V);
        vector<pair<int, pair<int, int>>> edges;


        for(int i = 0; i < V; i++) {
            for(auto it: adj[i]) {
                int adjNode = it[0];
                int wt = it[1];

                edges.push_back({wt, {i, adjNode}});
            }
        }

        int mstWt = 0;
        sort(edges.begin(), edges.end());

        for(auto it: edges) {
            int weight = it.first;
            int u = it.second.first;
            int v = it.second.second;

            if(ds.findUltimateParent(u) != ds.findUltimateParent(v)) {
                mstWt += weight;
                ds.unionByRank(u, v);
            }


        }

        return mstWt;
    }
};