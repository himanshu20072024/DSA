class Solution {
private:

    void findTopo(int node, stack<int>& st, vector<int>& vis, vector<pair<int,int>> adj[]) {

        vis[node] = 1;

        for(auto it : adj[node]) {
            int v = it.first;

            if(!vis[v]) {
                findTopo(v, st, vis, adj);  
            }
        }

        st.push(node);
    }

public:

    vector<int> shortestPath(int N, int M, vector<vector<int>>& edges) {

        vector<pair<int,int>> adj[N];

        for(int i = 0; i < M; i++) {

            int u = edges[i][0];
            int v = edges[i][1];
            int wt = edges[i][2];

            adj[u].push_back({v, wt});
        }

        // Step 1 : Topological Sort
        vector<int> vis(N,0);
        stack<int> st;

        for(int i = 0; i < N; i++) {
            if(!vis[i]) {
                findTopo(i, st, vis, adj);
            }
        }

        // Step 2 : Relax edges
        vector<int> dist(N, INT_MAX);
        dist[0] = 0;

        while(!st.empty()) {

            int node = st.top();
            st.pop();

            if(dist[node] != INT_MAX) {

                for(auto it : adj[node]) {

                    int v = it.first;
                    int wt = it.second;

                    if(dist[node] + wt < dist[v]) {
                        dist[v] = dist[node] + wt;
                    }
                }
            }
        }

        for(int i = 0; i < N; i++) {
            if(dist[i] == INT_MAX)
                dist[i] = -1;
        }

        return dist;
    }
};