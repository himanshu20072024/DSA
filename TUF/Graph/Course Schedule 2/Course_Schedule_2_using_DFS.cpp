class Solution {
private:
    bool dfs(int node, vector<int> &vis, vector<int> &pathVis, vector<vector<int>> &adj, stack<int> &st) {
        vis[node] = 1;
        pathVis[node] = 1;

        for(auto it: adj[node]) {
            if(!vis[it]) {
                if(dfs(it, vis, pathVis, adj, st)) {
                    return true;
                }
            }
            else if(pathVis[it]) {
                return true;
            }
        }
        pathVis[node] = 0;
        st.push(node);
        // cycle not detected !!
        return false;
    }

public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        // using DFS

        // creating adj list;
        int n = numCourses;
        vector<vector<int>> adj(n);
        for(auto it: prerequisites) {
            int from = it[1];
            int to = it[0];

            adj[from].push_back(to);
        }

        // creating vis and pathVis for dfs and detecting cycle
        vector<int> vis(n, 0);
        vector<int> pathVis(n, 0);

        // creating stack for storing ans;
        stack<int> st;

        // travering on nodes
        for(int i = 0; i < n; i++) {
            if(!vis[i]) {
                // will detect will
                if(dfs(i, vis, pathVis, adj, st)) {
                    return {};
                }
            }
        }

        vector<int> ans;
        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        return ans;
    }
};