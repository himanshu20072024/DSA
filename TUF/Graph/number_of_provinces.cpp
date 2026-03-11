class Solution {
    public :
        int numProvinces(vector<vector<int>> adj, int V) {
            vector<int> adjVct[V];
            for(int i = 0; i < V; i++) {
                for(int j = 0; j < V; j++) {
                    if(adj[i][j] == 1 && i != j) {
                        adjVct[i].push_back(j);
                        adjVct[j].push_back(i);
                    }
                }
            }
            int vis[V] = {0};
            int ans = 0;
            for(int i = 0; i < V; i++) {
                if(!vis[i]) {
                    ans++;
                    dfs(i, adjVct, vis);
                }
            }
            return ans;
        }
}