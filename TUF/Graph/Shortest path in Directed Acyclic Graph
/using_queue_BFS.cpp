// User function Template for C++
class Solution {
  public:
    vector<int> shortestPath(int V, int E, vector<vector<int>>& edges) {
        // i have to find shortest path from node 0 to every node !!
        
        // lets create the adjacenecy list with edge weight also
        vector<vector<pair<int, int>>> adj(V); // adjacent node, its weight
        
        // created adjacency list
        for(auto it: edges) {
            int from = it[0];
            int to = it[1];
            int weight = it[2];
            adj[from].push_back({to, weight});
        }
        
        
        
        vector<int> ans(V, 1e9);
        
        queue<pair<int, int>> q;
        q.push({0, 0});
        ans[0] = 0;
        
        
        // time : O(V*E) number of nodes times number of edges for this while loop
        while(!q.empty()) {
            int node = q.front().first;
            int dist = q.front().second;
            q.pop();
            // ans[node] = dist;
            
            if(dist > ans[node]) continue;
            for(auto it: adj[node]) {
                int adjNode = it.first;
                int adjDist = it.second;
                if(ans[adjNode] == 1e9) {
                    ans[adjNode] = adjDist+dist;
                    q.push({adjNode, adjDist+dist});
                } else if(ans[adjNode] > adjDist+dist) {
                    ans[adjNode] = adjDist+dist;
                    q.push({adjNode, adjDist+dist});
                }
            }
        }
        
        for(auto& it: ans) {
            if(it == 1e9) it = -1;
        }
        
        return ans;
        
    }
};
