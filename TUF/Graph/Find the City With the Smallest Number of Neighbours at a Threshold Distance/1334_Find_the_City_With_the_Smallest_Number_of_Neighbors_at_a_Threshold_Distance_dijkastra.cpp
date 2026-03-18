class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {

        vector<vector<pair<int, int>>> adj(n);

        for(auto& it: edges) {
            adj[it[0]].push_back({it[1], it[2]});
            adj[it[1]].push_back({it[0], it[2]});
        }

        int city = -1;
        int minReachable = INT_MAX;

        for(int i = 0; i < n; i++) {

            priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
            vector<int> dist(n, INT_MAX);

            dist[i] = 0;
            pq.push({0, i});

            while(!pq.empty()) {
                auto top = pq.top();
                pq.pop();

                int d = top.first;
                int node = top.second;

                // Important optimization
                if(d > dist[node]) continue;

                for(auto& it: adj[node]) {
                    int adjNode = it.first;
                    int wt = it.second;

                    if(d + wt < dist[adjNode]) {
                        dist[adjNode] = d + wt;
                        pq.push({dist[adjNode], adjNode});
                    }
                }
            }

            int cnt = 0;
            for(int j = 0; j < n; j++) {
                if(dist[j] <= distanceThreshold) {
                    cnt++;
                }
            }

            // Important: handle tie → take larger index
            if(cnt <= minReachable) {
                minReachable = cnt;
                city = i;
            }
        }

        return city;
    }
};