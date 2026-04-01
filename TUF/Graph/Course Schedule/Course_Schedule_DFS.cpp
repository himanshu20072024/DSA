class Solution {
private:
    bool dfs(int node, vector<int> &vis, vector<int>& pathVis, vector<vector<int>> &adj) {
        vis[node] = 1;
        pathVis[node] = 1;

        // going over the adjacemcy list
        for(auto it: adj[node]) {
            if(!vis[it]) {
                // cycle detection
                if(dfs(it, vis, pathVis, adj)) {
                    return true;
                }
            } else if(pathVis[it]) {
                return true;
            }
        }

        pathVis[node] = 0;
        return false;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        // [0, 1] means 1 -> 0 yup
        // convert prerequisites to undirected graph
        int n = numCourses;

        // creating adjacency list
        vector<vector<int>> adj(n);
        for(auto it: prerequisites) {
            int from = it[1];
            int to = it[0];

            adj[from].push_back(to);
        }

        // if cycle is detected in this directed graph then not possible else possible so here i go !!! to find the cycle

        vector<int> vis(n, 0);
        vector<int> pathVis(n, 0);

        // detecting cycle
        for(int i = 0; i < n; i++) {
            if(!vis[i]) {
                // cycle detected 
                if(dfs(i, vis, pathVis, adj)) {
                    return false;
                }
            }
        } 

        return true;

    }
};