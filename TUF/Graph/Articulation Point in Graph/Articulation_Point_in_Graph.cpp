// User function Template for C++

class Solution {
  private:
    int timer = 1;
    void dfs(int node, int parent, vector<int>& vis, vector<int>& mark, vector<int> adj[], vector<int>& low, vector<int>& tin) {
        vis[node] = 1;
        tin[node] = timer;
        low[node] = timer;
        timer++;
        
        int child = 0;
        for(auto it: adj[node]) {
            if(!vis[it]) {
                dfs(it, node, vis, mark, adj, low, tin);
                low[node] = min(low[node], low[it]);
                if(low[it] >= tin[node] && parent != -1) {
                    mark[node] = 1;
                } 
                child++;
            } else {
                low[node] = min(low[node], tin[it]);
            }
        }
        
        if(parent == -1 && child > 1) {
            mark[node] = 1;
        }
    }  
    
  public:
    vector<int> articulationPoints(int n, vector<int> adj[]) {
        vector<int> vis(n, 0);
        vector<int> mark(n, 0);
        vector<int> low(n);
        vector<int> tin(n);
        
        for(int i = 0; i < n; i++) {
            if(!vis[i]) {
                dfs(i, -1, vis, mark, adj, low, tin);
            }
        }
        
        vector<int> ans;
        
        for(int i = 0; i < n; i++) {
            if(mark[i] == 1) {
                ans.push_back(i);
            }
        }
        
        if(ans.size() == 0) return {-1};
        return ans;
    }
};