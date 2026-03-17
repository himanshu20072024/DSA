class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {

        // {from, {to, price}}
        vector<vector<pair<int, int>>> adj(n);

        for(auto it: flights) {
            adj[it[0]].push_back({it[1], it[2]});
        }

        queue<tuple<int, int, int>> q;
        // stops, src, cost
        q.push({0, src, 0});
        int cheapestPrice = INT_MAX;

        while(!q.empty()) {
            auto it = q.front();
            int currCost = get<2>(it);
            int node = get<1>(it);
            int stop = get<0>(it);
            q.pop();

            
            if(node == dst) {
                cheapestPrice = min(cheapestPrice, currCost);
            }
            
            if(stop > k) continue;
            if(currCost > cheapestPrice) continue;
            for(auto it: adj[node]) {
                int newCost = currCost + it.second;
                q.push({stop+1, it.first, newCost});
            }


        }

        if(cheapestPrice == INT_MAX) return -1;
        return cheapestPrice;
    }
};