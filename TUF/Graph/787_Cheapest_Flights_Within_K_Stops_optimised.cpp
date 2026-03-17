class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {

        vector<vector<pair<int,int>>> adj(n);
        for(auto &it : flights) {
            adj[it[0]].push_back({it[1], it[2]});
        }

        // cost array
        vector<int> dist(n, INT_MAX);
        dist[src] = 0;

        queue<pair<int,int>> q;
        // node, cost
        q.push({src, 0});

        int stops = 0;

        while(!q.empty() && stops <= k) {
            int size = q.size();

            // temp array for this level
            vector<int> temp = dist;

            while(size--) {
                auto [node, cost] = q.front();
                q.pop();

                for(auto &it : adj[node]) {
                    int adjNode = it.first;
                    int price = it.second;

                    if(cost + price < temp[adjNode]) {
                        temp[adjNode] = cost + price;
                        q.push({adjNode, temp[adjNode]});
                    }
                }
            }

            dist = temp;
            stops++;
        }

        return dist[dst] == INT_MAX ? -1 : dist[dst];
    }
};


// | Metric | Complexity   |
// | ------ | ------------ |
// | Time   | **O(K × E)** |
// | Space  | **O(N + E)** |
