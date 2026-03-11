class Solution {
    private : 
        bool check(int node, vector<int> adj[], int vis[], int pathVis[], int isSafe[]) {
            vis[node] = 1;
            pathVis[node] = 1;
            isSafe[node] = 0;

            for(auto it : adj[node]) {
                if(!vis[it]) {
                    if(check(it, adj, vis, pathVis, isSafe) == true) {
                        isSafe[node] = 0;
                        return true;
                    } else {
                        if(pathVis[it]) {
                            isSafe[node] = 0;
                            return true;    
                        }
                    }
                }
            }
            isSafe[node] = 1;
            pathVis[node] = 0;
            return false;
        }

    public :
        vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
            int vis[V] = {0};
            int pathVis[V] = {0};
            int isSafe[V] = {0};
            vector<int> safeNodes;
            for(int i = 0; i < V; i++) {
                if(!vis[i]) {
                    check(i, adj, vis, pathVis, isSafe);
                }
            }

            for(int i = 0; i < V; i++) {
                if(isSafe[i] == 1) {
                    safeNodes.push_back(i);
                }
            }
            return safeNodes;
        }
}