class Solution {
private:
    vector<int> topoSort(int V, vector<vector<int>>& adj) {
            vector<int> inDegree(V, 0);

            for(int i = 0; i < V; i++) {
                for(auto it : adj[i]) {
                    inDegree[it]++;
                }
            }

            queue<int> q;
            for(int i = 0; i < V; i++) {
                if(inDegree[i] == 0) {
                    q.push(i);
                }
            }

            vector<int> topo;
            while(!q.empty()) {
                int node = q.front();
                q.pop();
                topo.push_back(node);

                for(auto it : adj[node]) {
                    inDegree[it]--;
                    if(inDegree[it] == 0) {
                        q.push(it);
                    }
                }
            }

            return topo;

        }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);

        for(auto it : prerequisites) {
            adj[it[1]].push_back(it[0]);
        }

        vector<int> topo = topoSort(numCourses, adj);

        if(topo.size() == numCourses) return true;
        return false;
    }
};

// O(V + E)  ---> time
// O(V + E) ---> space