class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M){
        // so here we have to return the shortest distance to every node from vertex 0 
        // ig i can using BFS so lets do it !!

        vector<int> vis(N, 0);

        // ig i should create adjcenecy list first
        vector<vector<int>> adj(N);
        for(auto it: edges) {
            int node1 = it[0];
            int node2 = it[1];
            adj[node1].push_back(node2);
            adj[node2].push_back(node1);
        }

        queue<pair<int, int>> q; // node, distance;
        q.push({0, 0});
        vis[0] = 1;
        

        vector<int> ans(N, -1);
        ans[0] = 0;
        // lets iterate over adjacent edges
        while(!q.empty()) {
            int node = q.front().first;
            int dist = q.front().second;
            q.pop();

            ans[node] = dist;

            for(auto it: adj[node]) {
                if(!vis[it]) {
                    vis[it] = 1;
                    q.push({it, dist+1});
                }
                // else if(ans[it] > dist+1) { // same thing i was thinking 
                //     vis[it] = 1;
                //     q.push({it, dist+1});
                // }
            }
        }

        return ans;

    }
};
