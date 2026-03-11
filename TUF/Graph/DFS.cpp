class Solution {
    private :
        void dfs(int node, vector<int>& adj, int& vis, vector<int>& ans) {
            vis[node] = 1;
            ans.push_back(node);
            for(auto it : adj[node]) {
                if(!vis[it]) {
                    dfs(node, adj, vis, ans);
                }
            }
        }
    public :

        vector<int> DFS(int V, vector<int> adj) {
            vector<int> ans;
            int vis[n] = {0};
            int start = 0;
            dfs(start, adj, vis, ans);
            return ans;
        }
}

// time : O(N) + O(2*E)