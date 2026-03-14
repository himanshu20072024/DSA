class Solution {
public : 
    vector<int> dijkstra(int V, vector<vector<int>> adj[], int S) {

        // Min-heap storing {distance, node}.
        // The node with the smallest distance is always processed first.
        // If two nodes have the same distance, the smaller node index appears first.
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

        // Distance array where dist[i] stores the shortest distance from source S to node i
        vector<int> dist(V, INT_MAX);

        // Distance from source to itself is always 0
        dist[S] = 0;

        pq.push({dist[S], S});

        while(!pq.empty()) {

            int dis = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            // Traverse all adjacent nodes of the current node
            for(auto it: adj[node]) {

                int adjNode = it[0];
                int adjWeight = it[1];

                // Relaxation step:
                // If a shorter path to adjNode is found through the current node,
                // update the distance and push the new pair into the priority queue
                if(dis + adjWeight < dist[adjNode]) {

                    dist[adjNode] = dis + adjWeight;

                    pq.push({dist[adjNode], adjNode});
                }
            }
        }

        // dist array now contains the shortest distances from source to all vertices
        return dist;
    }
};

/*
Important Notes:

1. Dijkstra's algorithm works only for graphs with non-negative edge weights.
   If negative edges exist, the algorithm may produce incorrect results because
   it assumes that once the shortest distance to a node is found, it will not decrease.

2. If a negative cycle exists in the graph, the distance values can keep decreasing
   indefinitely, which makes shortest path computation impossible.

3. Instead of a priority queue, a set can also be used. With a set we can remove
   outdated distance entries when a better distance is found.

   In a priority queue, old entries remain in the heap and are ignored later
   when they are popped.

4. Time Complexity:
   O(E log V)
   where:
   V = number of vertices
   E = number of edges
*/
