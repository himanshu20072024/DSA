class Solution {
    private : 
        bool detect(int node, vector<int> adj[], vector<int>& vis) {
            vis[node] = 1;
            queue<pair<int, int>> q;
            q.push({node, -1});

            while(!q.empty()) {
                int src = q.front().first;
                int parent = q.front().second;
                q.pop();

                for(auto it : adj[src]) {
                    if(!vis[it]) {
                        vis[it] = 1;
                        q.push({it, src});
                    } else if(it != parent) {
                        return true;
                    }
                }
            }
            return false;
        }
    public :
        bool isCycle(int V, vector<int> adj[]) {
            vector<int> vis(V, 0);

            for(int i = 0; i < V; i++) {
                if(!vis[i]) {
                    if(detect(i, adj, vis)) {
                        return true;
                    }
                }
            }

            return false;
        }
}