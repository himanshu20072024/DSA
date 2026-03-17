class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {

        vector<vector<pair<int, int>>> adj(n+1);

        for(auto& it: times) {
            adj[it[0]].push_back({it[1], it[2]});
        }

        vector<int> minTime(n+1, INT_MAX);
        minTime[k] = 0;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, k});

        while(!pq.empty()) {
            auto [time, node] = pq.top();
            pq.pop();

            if(time > minTime[node]) continue;

            for(auto &iter: adj[node]) {
                int adjNode = iter.first;
                int edgeTime = iter.second;

                int newTime = time + edgeTime;

                if(newTime < minTime[adjNode]) {
                    minTime[adjNode] = newTime;
                    pq.push({newTime, adjNode});
                }
            }
        }

        int ans = 0;
        for(int i = 1; i <= n; i++) {
            if(minTime[i] == INT_MAX) return -1;
            ans = max(ans, minTime[i]);
        }

        return ans;
    }
};