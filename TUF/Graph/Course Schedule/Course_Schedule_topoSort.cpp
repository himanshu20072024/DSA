class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        // using topological sorting
        int V = numCourses;
        vector<int> inDegree(V, 0);
        queue<int> q;

        // adjacency matrix made
        vector<vector<int>> adj(V);
        for(auto it: prerequisites) {
            int from = it[1];
            int to = it[0];

            adj[from].push_back(to);
        }

        // inDegree made 
        for(int i = 0; i < V; i++) {
            for(auto it: adj[i]) {
                inDegree[it]++;
            }
        }

        // nodes with inDegree 0 inside queue
        for(int i = 0; i < V; i++) {
            if(inDegree[i] == 0) {
                q.push(i);
            }
        }

        // made topo sort
        vector<int> topo;
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            topo.push_back(node);

            for(auto it: adj[node]) {
                inDegree[it]--;
                if(inDegree[it] == 0) {
                    q.push(it);
                }
            }
        }

        // if topo sort size == V then no cycles 
        if(topo.size() == V) return true;
        return false;

        
    }
};