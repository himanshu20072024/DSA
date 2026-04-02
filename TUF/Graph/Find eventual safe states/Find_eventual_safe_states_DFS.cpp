class Solution {
private:
    bool dfs(int node, vector<int> &vis, vector<int> &pathVis, vector<vector<int>>& graph, vector<int> &check) {
        vis[node] = 1;
        pathVis[node] = 1;

        for(auto it: graph[node]) {
            if(!vis[it]) {
                // loop detected 
                if(dfs(it, vis, pathVis, graph, check)) {
                    return true;
                }
            } else if(pathVis[it]) {
                return true; // loop detected !!
            }
        }

        // if a node is terminal node means above loop is not going to run
        pathVis[node] = 0;
        check[node] = 1; // this is safe node;
        return false; // no loop detected 
    }

public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        // node is terminal if no outgoing edges
        // safe if every path leads to terminal nodes so ............
        // lets do dfs and see 

        // if cycle is detected then all the nodes in that cycle is not safe !!
        // so just detect cycle !!

        // how to detect cycle using dfs and topo sort yup

        int n = graph.size();

        vector<int> vis(n, 0);
        vector<int> pathVis(n, 0);

        // if check = 1 means it is safe else not safe
        vector<int> check(n, 0);
        for(int i = 0; i < n; i++) {
            if(!vis[i]) {
                dfs(i, vis, pathVis, graph, check);
            }
        }

        vector<int> ans;
        for(int i = 0; i < n; i++) {
            if(check[i]) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};