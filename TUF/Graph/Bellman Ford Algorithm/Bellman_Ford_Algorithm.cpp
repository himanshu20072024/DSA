class Solution {
public:
    vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {

        // Step 1: Initialize distances
        vector<int> dist(V, INT_MAX);
        dist[S] = 0;

        // Step 2: Relax all edges V-1 times
        for(int i = 0; i < V - 1; i++) {
            for(const auto &it : edges) {
                int u = it[0];
                int v = it[1];
                int wt = it[2];

                // Relaxation condition
                if(dist[u] != INT_MAX && dist[u] + wt < dist[v]) {
                    dist[v] = dist[u] + wt;
                }
            }
        }

        // Step 3: Check for negative weight cycle
        for(const auto &it : edges) {
            int u = it[0];
            int v = it[1];
            int wt = it[2];

            if(dist[u] != INT_MAX && dist[u] + wt < dist[v]) {
                return {-1}; // Negative cycle detected
            }
        }

        return dist;
    }
};