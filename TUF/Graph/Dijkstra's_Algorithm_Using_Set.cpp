class Solution {
public:
    vector<int> dijkstra(int V, vector<vector<int>> adj[], int S) {

        // Set will store pairs of {distance, node}
        // It automatically keeps elements sorted by distance
        set<pair<int,int>> st;

        // Distance array where dist[i] represents the
        // shortest distance from source S to node i
        vector<int> dist(V, INT_MAX);

        // Distance from source to itself is always 0
        dist[S] = 0;

        // Insert the source node into the set
        st.insert({0, S});

        while(!st.empty()) {

            // Get the node with the smallest distance
            auto top = *(st.begin());
            int dis = top.first;
            int node = top.second;

            // Remove this node from the set
            st.erase(st.begin());

            // Traverse all adjacent nodes of the current node
            for(auto edge : adj[node]) {

                int adjNode = edge[0];
                int adjWeight = edge[1];

                // Relaxation step:
                // If a shorter path to adjNode is found through the current node,
                // update its distance
                if(dis + adjWeight < dist[adjNode]) {

                    // If the node already exists in the set with an older distance,
                    // remove that outdated entry
                    if(dist[adjNode] != INT_MAX) {
                        st.erase({dist[adjNode], adjNode});
                    }

                    // Update the shortest distance
                    dist[adjNode] = dis + adjWeight;

                    // Insert the updated distance into the set
                    st.insert({dist[adjNode], adjNode});
                }
            }
        }

        // Return the shortest distance array
        return dist;
    }
};


/*
Important Notes:

1. Dijkstra's algorithm works only for graphs with non-negative edge weights.

2. If negative edges exist, the algorithm may produce incorrect results because
   it assumes that once the shortest distance to a node is found, it will not decrease again.

3. In this implementation we use a set instead of a priority queue.

4. Advantage of using a set:
   We can remove outdated distance entries when a better distance is found.
   This is done using:
       st.erase({oldDistance, node});

5. In the priority_queue implementation, outdated entries remain in the heap
   and are simply ignored later when they are popped.

6. Time Complexity:
   O(E log V)
   where:
   V = number of vertices
   E = number of edges

7. Space Complexity:
   O(V + E)
*/
