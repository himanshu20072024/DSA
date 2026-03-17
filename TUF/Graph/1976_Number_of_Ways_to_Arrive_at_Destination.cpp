class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int, int>>> adj(n);

        for(auto& it: roads) {
            adj[it[0]].push_back({it[1], it[2]});
            adj[it[1]].push_back({it[0], it[2]});
        }

        vector<long long> ways(n, 0);
        vector<long long> dist(n, LLONG_MAX);
        dist[0] = 0;
        ways[0] = 1;
        int mod = (1e9 + 7);
        priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> pq;
        // distance, node
        pq.push({0, 0});

        while(!pq.empty()) {
            long long node = pq.top().second;
            long long distance = pq.top().first;
            pq.pop();

            // 🔥 Important optimization
            if(distance > dist[node]) continue;
            for(auto it: adj[node]) {
                long long adjNode = it.first;
                long long adjDist = it.second;

                if(distance + adjDist < dist[adjNode]) {
                    dist[adjNode] = distance + adjDist;
                    ways[adjNode] = ways[node];
                    pq.push({dist[adjNode], adjNode});
                } else if(distance + adjDist == dist[adjNode]) {
                    ways[adjNode] = (ways[node] + ways[adjNode]) % mod;
                }
            }
        }

        return ways[n-1] % mod;
    }
};

// Time Complexity: O((V + E) log V)

// Space Complexity: O(V + E)