// User function Template for C++
class Solution {
  private:
    void dfs(int node, vector<int>& vis, stack<int>& st, vector<vector<pair<int, int>>> &adj) {
        vis[node] = 1;
        
        for(auto it: adj[node]) {
            int it1 = it.first;
            if(!vis[it1]) {
                dfs(it1, vis, st, adj);
            }
        }
        
        st.push(node);
    }
    
  public:
    vector<int> shortestPath(int V, int E, vector<vector<int>>& edges) {
        // using topo sort
        // finding topo sorting
        
        // finding adjacency list
        vector<vector<pair<int, int>>> adj(V);
        for(auto it: edges) {
            int from = it[0];
            int to = it[1];
            int wt = it[2];
            adj[from].push_back({to, wt});
        }
        
        
        stack<int> st;
        vector<int> vis(V, 0);
        for(int i = 0; i < V; i++) {
            if(!vis[i]) {
                dfs(i, vis, st, adj);
            }
        }
        
        vector<int> dist(V, 1e9);
        dist[0] = 0;
        
        // toposort stored in st
        while(!st.empty()) {
            int node = st.top();
            st.pop();
            
            int dis = dist[node];

            // this if condition is necessary because if we see line 57 dis+adjWt < dist[adjNode] is never trueas this dis is never reached 
            // imagine a graph and consider starting node is 0 and 0 is at 4th position in toposort now at 1st position 2 is there but dis of 2 is 1e9
            // now to reach adjNode dist will be 1e9+adjWt it will always be greater than 1e9 so we have to chose only processed nodes !!
            if(dis != 1e9) {
                for(auto it: adj[node]) {
                    int adjNode = it.first;
                    int adjWt = it.second;
                    if(dis+adjWt < dist[adjNode]) {
                        dist[adjNode] = dis+adjWt;
                    }
                }
            }
        }
        
        
        for(int i = 0; i < V; i++) {
            if(dist[i] == 1e9) dist[i] = -1;
        }
        return dist;
        
    }
};





















