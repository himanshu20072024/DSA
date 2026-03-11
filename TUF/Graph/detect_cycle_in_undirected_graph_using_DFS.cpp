class Solution {
    private :
        bool check(int src, int parent, vector<int>& adj, int& vis[]) {
            vis[src] = 1;

            for(auto adjacentNodes : adj[src]) {
                if(!vis[adjacentNodes]) {
                    if(check(adjacentNodes, src, adj, vis)) {
                        return true;
                    } else if(parent != adjacentNodes) {
                        return true;
                    }
                }
            }
            return false;
        }

    public :
        bool isCycle(int V, vector<int> adj[]) {
            int vis[V] = {0};

            for(int i = 0; i < V; i++) {
                if(!vis[i]) {
                    if(check(i, -1, adj, vis)) {
                        return true;
                    }
                }
                return false;
            }
        }
}

// space : O(N + N) vis and recursion stack space 
// time : O(N + 2E) + O(N)