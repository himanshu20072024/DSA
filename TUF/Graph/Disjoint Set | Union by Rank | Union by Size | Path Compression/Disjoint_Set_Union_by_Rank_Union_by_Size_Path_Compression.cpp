#include<bits/stdc++.h>
using namespace std;


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

int main() {
    DisjointSet ds(7);
    ds.unionByRank(1, 2);
    ds.unionByRank(2, 3);
    ds.unionByRank(4, 5);
    ds.unionByRank(6, 7);
    ds.unionByRank(5, 6);
    if(ds.findUltimateParent(3) == ds.findUltimateParent(7)) {
        cout << true;
    } else {
        cout << false;
    }

    ds.unionByRank(3, 7);
    if(ds.findUltimateParent(3) == ds.findUltimateParent(7)) {
        cout << true;
    } else {
        cout << false;
    }

    return 0;
}