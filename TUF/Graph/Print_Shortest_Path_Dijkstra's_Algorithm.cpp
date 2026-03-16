class Solution {
    public:
        vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
            
            vector<vector<pair<int, int>>> adj(n+1);

            for(auto it: edges) {
                adj[it[0]].push_back({it[1], it[2]});
                adj[it[1]].push_back({it[0], it[2]});
            }

            vector<int> dist(n+1, INT_MAX);
            dist[1] = 0;

            vector<int> parent(n+1);
            for(int i = 1; i <= n; i++) parent[i] = i;

            priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

            pq.push({0, 1});

            while(!pq.empty()) {
                auto it = pq.top();
                int dis = it.first;
                int node = it.second;
                pq.pop();

                if(dis > dist[node]) continue;

                for(auto it: adj[node]) {
                    int adjNode = it.first;
                    int adjWt = it.second;
                    if(dis + adjWt < dist[adjNode]) {
                        dist[adjNode] = dis + adjWt;
                        pq.push({dist[adjNode], adjNode});
                        parent[adjNode] = node;
                    }
                }
            }

            if(dist[n] == INT_MAX) return {-1};
            vector<int> path;

            int node = n;
            while(parent[node] != node) {
                path.push_back(node);
                node = parent[node];
            }

            path.push_back(1);

            reverse(path.begin(), path.end());

            return path;
        }
};

// Time Complexity:  O(E log V)
// Space Complexity: O(V + E)