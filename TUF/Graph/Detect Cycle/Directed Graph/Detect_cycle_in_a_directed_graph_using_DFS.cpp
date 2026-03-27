class Solution {
    private :
        bool check(int start, vector<int> adj[], int vis[], int pathVis[]) {
            vis[start] = 1;
            pathVis[start] = 1;

            for(auto it : adj[start]) {
                if(!vis[it]) {
                    if(check(it, adj, vis, pathVis) == true) {
                        return true;
                    }
                } else {
                    if(pathVis[it]) {
                        return true;
                    }
                }
            }
            pathVis[start] = 0;
            return false;
        }

    public :

        bool isCyclic(int V, vector<int> adj[]) {

            int vis[V] = {0};
            int pathVis[V] = {0};

            for(int i = 0; i < V; i++) {
                if(!vis[i]) {
                    if(check(i, adj, vis, pathVis) == true) {
                        return true;
                    }
                }
            }
            return false;
        }
};