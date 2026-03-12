class Solution {
    private : 
        bool dfs(int node, vector<int> adj[], vector<int>& vis, int parent) {
            vis[node] = 1;
            
            for(auto it : adj[node]) {
                if(!vis[it]) {
                    if(dfs(it, adj, vis, node)) {
                        return true;
                    }
                } else if(parent != it) {
                    return true;
                }
            }

            return false;
        }
    public : 
        bool isCycle(int V, vector<int> adj[]) {
            vector<int> vis(V, 0);

            for(int i = 0; i < V; i++) {
                if(!vis[i]) {
                    if(dfs(i, adj, vis, -1)) {
                        return true;
                    }
                }
            }

            return false;
        }
};