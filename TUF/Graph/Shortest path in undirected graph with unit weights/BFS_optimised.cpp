class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M){
        vector<int> ans(N, -1);
        queue<int> q;
        q.push(0);
        ans[0] = 0;

        vector<vector<int>> adj(N);

        for(auto it: edges) {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }

        while(!q.empty()) {
            int node = q.front();
            q.pop();

            for(auto it: adj[node]) {
                if(ans[it] == -1) {
                    ans[it] = ans[node] + 1;
                    q.push(it);
                }
            }
        }

        return ans;
    }
};

// time: O(N + (N+M))
// space: O(3*N)
