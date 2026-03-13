class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();

        vector<vector<int>> revAdj(n);
        vector<int> inDegree(n, 0);

        // before i -> it
        // after it -> i
        for(int i = 0; i < n; i++) {
            for(auto it : graph[i]) {
                revAdj[it].push_back(i);
                inDegree[i]++;
            }
        }

        queue<int> q;
        
        for(int i = 0; i < n; i++) {
            if(inDegree[i] == 0) {
                q.push(i);
            }
        }

        vector<int> safeNodes;
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            safeNodes.push_back(node);

            for(auto it : revAdj[node]) {
                inDegree[it]--;
                if(inDegree[it] == 0) {
                    q.push(it);
                }
            }
        }

        sort(safeNodes.begin(), safeNodes.end());

        return safeNodes;
    }
};

// here we reversed the graph directed and from all the terminal node we start doing toposort and at the end all safeStates got in correct position 

// | Metric | Complexity           |
// | ------ | -------------------- |
// | Time   | (O(V + E + V\log V)) |
// | Space  | (O(V + E))           |
