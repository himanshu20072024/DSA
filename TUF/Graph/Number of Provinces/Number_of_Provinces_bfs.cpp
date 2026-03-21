class Solution {
private:
    void bfs(int node, vector<vector<int>>& adj, vector<int>& vis, queue<int>& q) {
        q.push(node);
        vis[node] = 1;
        
        while(!q.empty()) {
            int a = q.front();
            
            q.pop();

            for(auto it: adj[a]) {
                if(!vis[it]) {
                    q.push(it);
                    vis[it] = 1;
                }
            }
        }
    }

public:

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<vector<int>> adj(n);

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(i != j && isConnected[i][j] == 1) {
                    adj[i].push_back(j);
                    
                }
            }
        }

        vector<int> vis(n, 0);
        queue<int> q;
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(!vis[i]) {
                bfs(i, adj, vis, q);
                cnt++;
            }
        }
        return cnt;
    }
};