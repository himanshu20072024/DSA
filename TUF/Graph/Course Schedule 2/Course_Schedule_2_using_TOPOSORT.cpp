class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        // creting adj list
        int n = numCourses;
        vector<vector<int>> adj(n);
        for(auto it: prerequisites) {
            int from = it[1];
            int to = it[0];

            adj[from].push_back(to);
        }

        // ordering will be topo sort
        // lets do topo sort 

        queue<int> q;

        // creating inDegree 
        vector<int> inDegree(n);
        for(int i = 0; i < n; i++) {
            for(auto it: adj[i]) {
                inDegree[it]++;
            }
        }

        // pushing inDegree with 0 to q
        for(int i = 0 ; i < n; i++) {
            if(inDegree[i] == 0) {
                q.push(i);
            }
        }

        // finding topo sort
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

        if(topo.size() == n)
            return topo;
        return {};
    }
};